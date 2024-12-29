#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// find 2nd largest

int main() {
    vector<int> arr = {3 , 2 , 5 , 1 , 4 , 5 , 55};
    int n = arr.size();

    int largest = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "largest: " << largest << endl;

    int secLargest = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > secLargest && arr[i] < largest) {
            secLargest = arr[i];
        }
    }
    cout << "2nd largest: " << secLargest;

    return 0;
}