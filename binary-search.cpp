#include<iostream>
using namespace std;

void display(int arr[] , int n) {

    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sorting(int arr[] , int n) {

    for(int i = 0 ; i < n-1 ; i++) {
        int smallIdx = i;

        for(int j = i+1 ; j < n ; j++) {
            if(arr[j] < arr[smallIdx]) {
                smallIdx = j;
            }
        }
        swap(arr[i] , arr[smallIdx]);
    }
}

int binarySearch(int arr[] , int n , int target) {

    int st = 0 , end = n - 1;

    while(st <= end) {

        int mid = st + (end - st) / 2;
        if(target > arr[mid]) {
            st = mid + 1;
        }
        else if(target < arr[mid]) {
            end = mid - 1;
        }
        else return mid;
    }
    return -1;
}

int main() {

    int n = 6 , target = 3;
    int arr[] = {1 ,3 ,5 ,4 ,2, 6};

    display(arr , n);
    sorting(arr , n);
    display(arr , n);
    int res = binarySearch(arr , n , target);
    cout << "result = " << res;

    return 0;
}





