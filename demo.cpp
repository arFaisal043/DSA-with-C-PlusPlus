#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {-4, -1, 0, 3, 10};
    
    for(int i = 0; i < arr.size(); i++) {
        arr[i] = arr[i] * arr[i];
    }
    sort(arr.begin() , arr.end());
    for(int i : arr) {
        cout << i << " ";
    }
}

