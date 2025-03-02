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



/*

prob 1: Rotated sorted array --> O(logn)


sol: 
int search(vector<int>& nums, int target) {

        int st = 0, end = nums.size() - 1;

        while(st <= end) {
            int mid = st + (end - st) / 2;

            if(nums[mid] == target) {
                return mid;
            }

            if(nums[st] <= nums[mid]) { // Left side sorted

                if(nums[st] <= target && target <= nums[mid]) {
                    end = mid - 1;
                }
                else {
                    st = mid + 1;
                }
            }
            else { // Right side sorted

                if(nums[mid] <= target && target <= nums[end]) {
                    st = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }

        return -1;
        
    }





prob 2: Search insert position


int binarySearch(int arr[], int n) {
    int targetval = 14;
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
    return st;
}

int main() {
    int arr[] = {1, 3, 4, 5, 9, 12};
    int n = 6;
    
    int res = binarySearch(arr, n);
    cout << res;

    return 0;
}


prob 3: Peak index in a mountain array(max elm)

Approach 1: (Brute force) --> O(n)

int maxVal(vector<int>& arr) {
    int peakIdx;
    for(int i = 0; i < arr.size() - 1; i++) {
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            peakIdx = i;
        }
    }
    return peakIdx;
}

int main() {
    vector<int> arr = {1, 3, 8, 12, 4, 2};
    cout << maxVal(arr);
    return 0;
}


Approach 2: (Binary search) --> O(Log n)

int maxVal(vector<int>& arr) {
    int st = 1, end = arr.size() - 2;

    while(st <= end) {
        int mid = st + (end - st) / 2;
        
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        else if(arr[mid] < arr[mid + 1]) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}




prob 4: Single element in a sorted array --> O(Log n)

int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size(), st = 0, end = n - 1;
        
        // corner case
        if(n == 1) return arr[0];

        while(st <= end) {
            int mid = st + (end - st) / 2;

            // corner case
            if(mid == 0 && arr[mid] != arr[mid + 1]) return arr[mid];
            else if(mid == n-1 && arr[n - 1] != arr[n - 2]) return arr[mid];

            if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
                return arr[mid];
            }
            // search space
            else if(mid % 2 == 0) {
                if(arr[mid] == arr[mid - 1]) {
                    end = mid - 1;
                }
                else {
                    st = mid + 1;
                }
            }
            else {
                if(arr[mid] == arr[mid + 1]) {
                    end = mid - 1;
                }
                else {
                    st = mid + 1;
                }
            }
        }
        return -1;

    }



*/