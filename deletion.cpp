#include<iostream>
using namespace std;

int main() {

    int size = 5 , capacity = 100 , targetIndex = 4 ;
    int arr[capacity] = { 7 , 8 , 12 , 17 , 88 };

    //print Array
    for(int i = 0 ; i < size ; i++) {
        cout << " " << arr[i] ;
    }

    for(int i = targetIndex  ; i <= size ; i++) {
        arr[i] = arr[i + 1];   
    }
    size--;
    cout << endl;

    //print final array
    for(int i = 0 ; i < size ; i++) {
        cout << " " << arr[i];
    }

    return 0;
}


/*

//-- Delete Multiple elements-

int main() {
    int size = 5 , targetIndex_1 = 1 , targetIndex = 2;
    int arr[10] = {1 , 2 , 3 , 4 , 5};

    for(int i = targetIndex_1 ; i <= size ; i++) {

        arr[i - 2] = arr[i];
    }
    size -= 2;

    for(int i = 0 ; i < size ; i++) {

        cout << arr[i] << " ";
    }
}

 */