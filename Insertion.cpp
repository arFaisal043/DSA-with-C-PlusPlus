#include<iostream>
using namespace std;

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





//--------- Insert First Anywhere ----------



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

