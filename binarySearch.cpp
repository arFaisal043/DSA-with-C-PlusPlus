#include <iostream>
using namespace std;

int binarySearch(int arr[], int n) {
    int targetval = 9;
    int st = 0, end = n - 1;

    while(st <= end) {
        int mid = st + (end - st) / 2;

        if(targetval > arr[mid]) {
            st = mid + 1;
        }
        else if(targetval < arr[mid]) {
            end = mid - 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main() {

    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int n = 7;
    
    int res = binarySearch(arr, n);

    if(res != -1) {
        cout << "Target value is at index no: " << res << endl;
    }
    else {
        cout << "Not found" << endl;
    }
    
    return 0;
}
