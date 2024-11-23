#include<iostream>
using namespace std;



int main() {

    

    return 0;
}





/* 
 Array Struct:

 int marks[] = {100 , 90 , 80 , 33 , 40};


Lopps on array:

int main() {

    int size = 5;
    int marks[size];

    for (int i = 0 ; i < size ; i++) {
        cin >> marks[i];
    }

    for(int i = 0 ; i < size ; i++) {
        cout << marks[i] << " ";
    }
    
    return 0;
}






Prob: Find Max and Min Value on array using LOOPs

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n; 

    int val[n];
    int smallest = INT_MAX;
    int largest = INT_MIN;

// input array
    for(int i = 0 ; i < n ; i++) {
        cin >> val[i];
    }

    // output array
    for(int i = 0 ; i < n ; i++) {
        cout << val[i] << " " ;
    }

// output smallest val
    for(int i = 0 ; i < n ; i++) {

        if(val[i] < smallest) {
            smallest = val[i];
            continue;
        }
    }
    cout << smallest << endl;

// output Largest val
    for(int i = 0 ; i < n ; i++) {

        if(val[i] > largest) {
            largest = val[i];
            continue;
        }
    }
    cout << largest << endl;


    return 0;
}

.. using min & max function ..

// output smallest val
    for(int i = 0 ; i < n ; i++) {

        smallest = min(val[i] , smallest);
    }
    cout << smallest << endl;

// output Largest val
    for(int i = 0 ; i < n ; i++) {

        largest = max(val[i] , smallest);
    }
    cout << largest << endl;









---------- Linear Search -----------

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








prob: Sum 2nd abd 4th index of an array.

int main() {
    int n , sum = 0;
    cout << "Enter n : ";
    cin >> n; 
    int arr[n];

    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " " ;
    }

    for(int i = 0 ; i < n ; i++) {
        if(arr[i] == 2 | arr[i] == 4) {
            sum += arr[i];
        }
    }
    cout << "Sum = " << sum;

    return 0;
}



*/
