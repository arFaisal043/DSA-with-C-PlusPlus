#include <iostream>
#include <vector>
using namespace std;

void insertionSort(int arr[], int size) {
     // Loop over the array starting from the second element 
     for(int i = 1; i < size; i++) { 
        int curr = arr[i]; 
        int prev = i - 1;
        //Shift elements of the sorted segment that are greater than curr 
        while(prev >= 0 && arr[prev] > curr) { 
            arr[prev + 1] = arr[prev]; // Move the element one position to the right 
            prev--; 
        } arr[prev + 1] = curr; // Insert the current element into its correct position 
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
    insertionSort(arr , size);
    display(arr , size);
}