#include <iostream>
#include <vector>
using namespace std;

void mergeArr(vector<int> &arr1 , vector<int> &arr2 , int m , int n) {
    vector<int> tempArr;

    int idx = m + n - 1, i = m - 1, j = n - 1;

    while(i >= 0 && j >= 0) {
        if(arr1[i] <= arr2[j]) {
            arr1[idx] = arr2[j];
            idx-- , j--;
        }
        else {
            arr1[idx] = arr1[i];
            idx-- , i--;
        }
    }

    while(j >= 0) {
        arr1[idx] = arr2[j];
        idx-- , j--;
    }
}

int main() {
    vector<int> arr1 = {4 , 5 , 6 , 0 , 0 , 0};
    vector<int> arr2 = {1 , 2 , 3};
    int m = 3 , n = 3;
    
    mergeArr(arr1 , arr2 , m , n);

    for(int i : arr1) {
        cout << i << " ";
    }

    return 0;
}