#include<iostream>
using namespace std;

// Bubble
void bubbleSort(int arr[] , int size) {

    for(int i = 0 ; i < size-1 ; i++) {
        for(int j = 0 ; j < size-i-1 ; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

// selection
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

// Insertion


void display(int arr[] , int size) {
    for(int i = 0 ; i < size ; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {4 , 1 , 5 , 2 , 3};
    int size = 5;
    //bubbleSort(arr , size);
    selectionSort(arr , size);
    display(arr , size);
}