#include<iostream>
using namespace std;

int linearSearch(int arr[] , int size , int targetVal) {

    for(int i = 0 ; i < size ; i++) {
        if(arr[i] == targetVal) {
            return i;
        }
    }
    return -1; // not found
}

int main() {

    int arr[] = { 8 , 9 , 4 , 99 , 24 , 12};
    int size = 5;
    int targetVal = 99;

    cout << linearSearch(arr , size , targetVal);

    return 0;
}



/*

prob1: Find min / max Number. 

int linearSearch(int arr[] , int size , int targetVal) {

    for(int i = 0 ; i < size ; i++) {
        if(arr[i] == targetVal) {
            return i;
        }
    }
    return -1; // not found
}

int main() {

    int arr[] = { 8 , 9 , 4 , 99 , 24 , 12};
    int size = 5;
    int targetVal = 99;

    cout << linearSearch(arr , size , targetVal);

    return 0;
}




prob2 : We have a target value. Now we have to find that index number. 




*/