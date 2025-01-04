#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {4 , 1 , 5 , 2 , 3};
    int size = 5;

    for(int i = 0 ; i < size-1 ; i++) {
        int smallestIdx = i;
        for(int j = i + 1 ; j < size ; j++) {
            if(arr[j] < arr[smallestIdx]) {
                smallestIdx = j;
                continue;
            }
        }
        swap(arr[i] , arr[smallestIdx]);
    }

    for(int i = 0 ; i < size ; i++) {
        cout << arr[i] << " ";
    }
}