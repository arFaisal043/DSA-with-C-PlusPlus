#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr , int st , int mid , int end) {

    vector<int> tempArr;
    int i = st, j = mid + 1;

    while(i <= mid && j <= end) {
        if(arr[i] <= arr[j]) {
            tempArr.push_back(arr[i]);
            i++;
        }
        else {
            tempArr.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid) {
        tempArr.push_back(arr[i]);
        i++;
    }

    while(j <= end) {
        tempArr.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx < tempArr.size(); idx++) {
        arr[idx + st] = tempArr[idx];
    }
}

void mergeSort(vector<int> &arr , int st , int end) {

    if(st < end) {
        int mid = st + (end - st) / 2;

        mergeSort(arr , st , mid); // Left half
        mergeSort(arr , mid + 1 , end); // Right half
        merge(arr , st , mid , end);
    }
}

int main() {

    vector<int> arr = {12 , 31 , 35 , 8 , 32 , 16};
    int st = 0, end = arr.size() - 1;
    mergeSort(arr , st , end);

    for(int i : arr) {
        cout << i << " " ;
    }

    return 0;
}