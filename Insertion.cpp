#include<iostream>
using namespace std;

int main() {

    int size = 5 , capacity = 100 , targetIndex = 2 , targetVal = 9;
    int arr[capacity] = { 7 , 8 , 12 , 17 , 88 };

    //print Array
    for(int i = 0 ; i < size ; i++) {
        cout << " " << arr[i] ;
    }

    for(int i = size ; i >= targetIndex ; i--) {
        //arr[i + 1] = arr[i];   
        arr[i] = arr[i-1];
    }
    arr[targetIndex] = targetVal;
    size++;
    cout << endl;

    //print final array
    for(int i = 0 ; i < size ; i++) {
        cout << " " << arr[i];
    }

    return 0;

}

/*
// ---------- Insert at Last Index -----------

int main() {
    int targetValue = 99 , size = 7;
    int arr[100] = {7 , 8 , 12 , 27 , 88 };
     arr[size] = targetValue;
     size++;

     for(int i = 0 ; i < size ; i++) {
        cout << arr[i] << " ";
     }

    return 0;
}





//--------- Insert First and Anywhere ----------



int main() {

    int size = 4 , capacity = 100 , targetIndex = 2 , targetVal = 9;
    int arr[capacity] = { 7 , 8 , 12 , 17 , 88 };

    //print Array
    for(int i = 0 ; i <= size ; i++) {
        cout << " " << arr[i] ;
    }

    for(int i = size ; i >= targetIndex ; i--) {
        arr[i + 1] = arr[i];   
    }
    arr[targetIndex] = targetVal;
    size++;
    cout << endl;

    //print final array
    for(int i = 0 ; i <= size ; i++) {
        cout << " " << arr[i];
    }

    return 0;

}




// --> Using Function:

void display(int arr[] , int size) {
    for(int i = 0 ; i <= size ; i++) {
        cout <<  arr[i] << " ";
    }
}

int insertion(int arr[] , int size , int targetIndex , int capacity , int targetValue){
    if(size >= capacity) {
        return -1;
    }
    for (int i = size ; i >= targetIndex; i--) {
        arr[i + 1] = arr[i];
    }
    arr[targetIndex] = targetValue;

    return 1;
}

int main() {

    int arr[100] = {7 , 8 , 12 , 27 , 88};
    int size = 4 , targetIndex = 2 , capacity = 100 , targetValue = 9;
    display(arr , size) ;
    insertion (arr , size , targetIndex , capacity , targetValue);
    size++;
    cout << endl; 
    display(arr , size);
}







prob 1: Insert 2 element at the last two index.

int main() {
    int size = 4 , capacity = 100, val_1 = 5 , val_2 = 6;
    int arr[capacity] = {1 , 2 , 3 , 4} ;

    arr[size] = val_1;
    arr[size + 1] = val_2;
    size += 2;

    for(int i = 0 ; i < size ; i++) {
        cout << arr[i];
    }
}






prob 2: Insert 2 element at the first or anywhere.

int main() {
    int size = 4 , capacity = 100, val_1 = 2 , val_2 = 3 , targetIndex_1 = 1 , targetIndex_2 = 2 ;
    int arr[capacity] = {1 , 4 , 5 , 6} ;

    for(int i = size ; i >= targetIndex_1 ; i--) {
        arr[i + 2] = arr[i];
    }

    arr[targetIndex_1] = val_1;
    arr[targetIndex_2] = val_2;
    size += 2;

    for(int i = 0 ; i < size ; i++) {
        cout << arr[i] << " ";
    }
}







prob 4: Declare an Array, take Size, Elements dynamically. Insert an element in any of the 
        Even index position except 0th index.



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


*/