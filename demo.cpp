#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<int> arr = {6, 3, 4, 5, 2};
    int n = arr.size();

    if(arr[n - 1] != 9) {
        arr[n - 1] += 1;
    }
    else if(arr[n - 1] == 9) {
        for(int i = n-1; i > 0; i--) {
            arr[n - 1] == 0;
        }
    }

    for(int i : arr) {
        cout << i;
    }

    return 0;
}
