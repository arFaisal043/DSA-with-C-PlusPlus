#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int lastStoneWeight(vector<int>& stones) {
    while (stones.size() > 1) {
        sort(stones.begin(), stones.end(), greater<int>()); 
        int y = stones[0]; // Heaviest stone
        int x = stones[1]; // Second heaviest stone
        stones.erase(stones.begin(), stones.begin() + 2); 
        
        if (y != x) {
            stones.push_back(y - x); 
        }
    }
    
    return stones.empty() ? 0 : stones[0]; 
}

int main() {
    vector<int> stones = {2, 7, 4, 1, 8, 1};
    cout << lastStoneWeight(stones) << endl;
    return 0;
}