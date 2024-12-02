#include<iostream>
using namespace std;

void inputArray(int arr[] , int size) {
    for(int i = 0 ; i < size ; i++) {
        cin >> arr[i];
    }
}

void display(int arr[] , int size , int capacity) {

    for(int i = 0 ; i < size ; i++) {
        cout << arr[i] << " ";
    }
}

// Insertion value at any index:
void insertion(int arr[] , int capacity , int size , int targetIndex , int targetVal) {

    for(int i = size ; i >= targetIndex ; i--) {
        arr[i + 1] = arr[i];
    }
    arr[targetIndex] = targetVal;
}

// Deletion value at last index:





int main() {
    int size , capacity , targetIndex , targetVal;
    cout << "Enter Capacity , Size , Target Index , Target Value :";
    cin >> capacity >> size >> targetIndex >> targetVal;
    cout << "Capacity: " << capacity << ", Size: " << size << ", Target Index: " << targetIndex << ", Target Value: " << targetVal << endl;

    if(size > capacity) {
            cout << "Size can not greater than Capacity. Try again";
            return 1;
    }
    else if(targetIndex % 2 != 0 || targetIndex > capacity || targetIndex == 0) {
        cout << "some error. Write new target index. Please try again : ";
        cin >> targetIndex;
    }

    int arr[capacity];
    cout << "Enter "<< size << " Array Elements here:" << endl ;

    inputArray(arr , size);
    display(arr , size , capacity);

    insertion(arr , capacity , size , targetIndex , targetVal);
    size++;
    cout << endl;
    display(arr , size , capacity);

    return 0;
}