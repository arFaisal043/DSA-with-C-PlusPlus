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
    //int sum = 0;
    for(int st = 0; st < size; st++) {
        int  sum = 0;
        for(int end = st; end < size; end++) {
            sum += arr[end];
            maxSum = max(sum , maxSum);
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

*/