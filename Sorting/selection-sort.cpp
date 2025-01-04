#include <iostream>
#include <vector>
using namespace std;

void selectionSort(int arr[] , int size) {

    for(int i = 0 ; i < size-1 ; i++) {
        int smallestIdx = i;
        for(int j = i + 1 ; j < size ; j++) {
            if(arr[j] < arr[smallestIdx]) {
                smallestIdx = j;
            }
        }
        swap(arr[i] , arr[smallestIdx]);
    }
}

void display(int arr[] , int size) {
    for(int i = 0 ; i < size ; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {4 , 1 , 5 , 2 , 3};
    int size = 5;
    selectionSort(arr , size);
    display(arr , size);
}