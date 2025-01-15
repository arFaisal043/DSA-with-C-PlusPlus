#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1 , 2 , 3};
    int cnt = arr.size();

    int subArr = cnt * (cnt + 1) / 2;
    cout << "Sub Array: " << subArr;

    return 0;
}


/* 

-- For Each Loop:

int main() {

    vector<char> vec = {'a' , 'b' , 'c'};

    for(char val : vec) {
        cout << val << endl;
    }
    
    return 0;
}


-- Vector Function:

1. size()
    vector<char> vec = {'a' , 'b' , 'c' , 'd' , 'e'};
    cout << "Size of Array is: " << vec.size() << endl; // 5

2. Push_back()
    vector<int> vec = {1 , 2 , 3 , 4};
    vec.push_back(5);
    cout << "Size: " << vec.size() << endl; // 1 2 3 4 5

3. pop_back()
    vec.pop_back();




prob1: Print all Sub Array. 

int main() {
    int size = 5;
    int arr[] = {1 , 2 , 3 , 4 , 5};

    for(int st = 0; st < size; st++) {
        for(int end = st; end < size; end++) {
            for(int i = st; i <= end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

Output: 1 12 123 1234 12345 
        2 23 234 2345
        3 34 345
        4 45
        5



prob2: Find Maximum sub array sum.

int main() {
    int size = 5 , maxSum = INT_MIN;
    int arr[] = {1 , 2 , 3 , 4 , 5};
    //int currSum = 0;
    for(int st = 0; st < size; st++) {
        int  currSum = 0;
        for(int end = st; end < size; end++) {
            sum += arr[end];
            maxSum = max(currSum , maxSum);
        }
    }
    cout << "Maximum is: " << maxSum;
    
    return 0;
}


-- Using Kadanse's Algorithm --

int main() {
    vector<int> nums = {3 , -4 , 5 , 4 , -1 , 7 , -8};
    int currSum = 0 , maxSum = INT_MIN;

    for(int val : nums) {
        currSum += val;
        maxSum = max(currSum , maxSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }
    cout << "Max sum is: " << maxSum;
}





prob 3: find pair sum of an array


<--- Using Brute Force --->

vector<int> pairSum(vector<int> arr , int target) {
    vector<int> ans;
    int n = arr.size();

    for(int i = 0; i < n ; i++) {
        for(int j = i + 1 ; j < n ; j++) {
            if(arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;   //  ans has only two elm(i , j)
            }
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2 , 7 , 11 , 15};
    int target = 17;
    vector<int> ans = pairSum(arr , target);
    cout << ans[0] << " , " << ans[1];

    return 0;
}



<--- Using Two Pointer Approach --->

vector<int> pairOfSum(vector<int> arr , int target) {
    vector<int> ans;
    int n = arr.size();

    int st = 0 , end = n - 1;
    while(st < end) {
        int pairSum = arr[st] + arr[end];

        if(pairSum > target) {
            end--;
        }
        else if(pairSum < target) {
            st++;
        }
        else {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2 , 7 , 11 , 15};
    int target = 26;
    vector<int> ans = pairOfSum(arr , target);
    cout << ans[0] << " , " << ans[1];

    return 0;
}





prob 4: Find majority element. 

--- using Brute force ---
int majorityElm(vector<int> arr) {
    int n = arr.size();

    for(int val : arr) {
        int freq = 0;

        for(int elm : arr) {
            if(elm == val) {
                freq++;
            }
        }
        if(freq > n / 2) {
            return val;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1 , 2 , 2 , 1 , 2 , 1 , 1};
    int ans =  majorityElm(arr);
    cout << ans;

    return 0;
}




-- Optimize Code --

int majorityElm(vector<int> arr) {
    int n = arr.size();

    // sort
    sort(arr.begin(), arr.end());
    int freq = 1 , ans = arr[0];

    for(int i = 1 ; i < n ; i++) {
        if(arr[i] == arr[i - 1]) {
            freq++;
        }
        else {
            freq = 1;
            ans = arr[i];
        }

        if(freq > n/2) {
            return ans;
        }
    }
    return ans;
}


-- Moores Voting Algo --

int main() {
    int arr[] = {1 , 2 , 2 , 1 , 2 , 1 , 1};
    int n = 7;
    int cnt = 0 , ans = 0;

    for(int i = 0; i < n; i++) {
        if(cnt == 0) {
            ans = arr[i];
        }
        if(ans == arr[i]) {
            cnt++;
        }
        else {
            cnt--;
        }
    }
    cout << ans;
}





Prob5: Moves zero at the end 


-- Brute Force --

void moveZero(vector<int>& nums) {
    <-- The & symbol in the void moveZeros(vector<int>& arr) function indicates that the parameter arr is being passed by reference, not by value. This means that the function operates directly on the original vector<int> passed to it, rather than working on a copy.-->

    vector<int> result; // Declared a temp array
    
    // Add non-zero elements to the result array
    for (int val : nums) {
        if (val != 0) {
            result.push_back(val);
        }
    }
    
    // Fill the remaining positions with zeroes
    while (result.size() <= nums.size()) {
        result.push_back(0);
    }
    
    // Copy the result back to the original array
    for (int i = 0; i < nums.size(); ++i) {
        nums[i] = result[i];
    }
}




-- Two Pointer Approach --


void moveZeros(vector<int>& arr) {
    
    int j = -1;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }

    for(int i = j + 1; i < arr.size(); i++) {
        if(arr[i] != 0) {
            swap(arr[i] , arr[j]);
            j++;
        }
    }
}



int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZero(nums);

    for (int num : nums) {
        cout << num << " ";
    }
}




Prob6: Merge 2 sorted array

void mergeArr(vector<int> &arr1 , vector<int> &arr2 , int m , int n) {
    vector<int> tempArr;

    int idx = m + n - 1, i = m - 1, j = n - 1;

    while(i >= 0 && j >= 0) {
        if(arr1[i] <= arr2[j]) {
            arr1[idx] = arr2[j];
            idx-- , j--;
        }
        else {
            arr1[idx] = arr1[i];
            idx-- , i--;
        }
    }

    while(j >= 0) {
        arr1[idx] = arr2[j];
        idx-- , j--;
    }
}

int main() {
    vector<int> arr1 = {4 , 5 , 6 , 0 , 0 , 0};
    vector<int> arr2 = {1 , 2 , 3};
    int m = 3 , n = 3;
    
    mergeArr(arr1 , arr2 , m , n);

    for(int i : arr1) {
        cout << i << " ";
    }

    return 0;
}

*/