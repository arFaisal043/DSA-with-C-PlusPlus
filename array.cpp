#include<iostream>
using namespace std;

int main() {

    int size = 4 , start = 0 , end = size - 1;
    int arr[] = {1 , 2  , 3 , 4};

    while(start <= end) {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }

    for(int i = 0 ; i < size ; i++) {
        cout << arr[i];
    }

    return 0;
}



/* 
 Array Struct:

 int marks[] = {100 , 90 , 80 , 33 , 40};


Loops on array:

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






Prob 1: Find Max and Min Value on array using LOOPs

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








prob 2: Sum 2nd and 4th index of an array.

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
        if(i == 2 | i == 4) {
            sum += arr[i];
        }
    }
    cout << "Sum = " << sum;

    return 0;
}





prob 3: Consider an array AUTO which records the number of automobiles
      sold each year from 1982 to 2020. Find the number NUM of years
      during which more than 300 automobiles were sold.


int main() {

    int NUM = 0;
    int AUTO[39] = {   --> (2020 - 1982 = 39)
        250, 310, 290, 305, 320, 295, 310, 300, 335, 290, 315, 340, 320, 330, 360, 310, 300, 275, 295, 310, 
        335, 325, 290, 305, 320, 315, 310, 330, 340, 350, 360, 370, 380, 290, 310, 315, 320, 330, 300
    };

    for (int i = 0; i < 39; i++) {
        if (AUTO[i] > 300) {
            NUM++;
        }
    }

    cout << "Number of years with more than 300 automobiles sold: " << NUM << endl;

    return 0;
}



prob 4: Reverse an array-

int main() {

    int size = 4 , start = 0 , end = size - 1;
    int arr[] = {1 , 2  , 3 , 4};

    while(start <= end) {
        //swap(arr[start] , arr[end]);  

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for(int i = 0 ; i < size ; i++) {
        cout << arr[i];
    }

    return 0;
}



Prob5 : Write a function to print unique value in an array.

int singleNumber(int nums[] , int size) {
        int ans = 0;
        for(int i = 0 ; i < size ; i++) {
            ans ^= i;
        }

        return ans;
}

int main() {
    int size = 5;
    int nums[] = {4 , 1 , 2 , 1 ,2};
    cout << singleNumber(nums , size);
    
    return 0;
}


prob6: Print 2nd largest element


int main() {
    vector<int> arr = {3 , 2 , 5 , 1 , 4 , 5};
    int n = arr.size();
    sort(arr.begin() , arr.end()); // 1 2 3 4 5 5
    int largest = arr[n - 1]; // 5

    for(int i = n - 2; i > 0; i--) {
        if(arr[i] != largest) {
            int SecLargest = arr[i];
            cout << SecLargest;
            break;
        }
    }
    return 0;
}


Prob7 : Find 2nd largest elm without sorting


int main() {
    vector<int> arr = {3 , 2 , 5 , 1 , 4 , 5 , 55};
    int n = arr.size();

    int largest = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "largest: " << largest << endl;

    int secLargest = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > secLargest && arr[i] < largest) {
            secLargest = arr[i];
        }
    }
    cout << "2nd largest: " << secLargest;

    return 0;
}

*/
