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

*/