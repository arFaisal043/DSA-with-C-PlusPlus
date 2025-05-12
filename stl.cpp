#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {12 , 31 ,35 , 8 , 32 , 17};

    sort(vec.begin() , vec.end());
    
    for(int val : vec) {
        cout << val << " ";
    }

    return 0;
}