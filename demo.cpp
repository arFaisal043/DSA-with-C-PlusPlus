#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {3 , -4 , 5 , 4 , -1 , 7 , -8};
    int currSum = 0 , maxSum = INT_MIN;

    for(int i : arr) {
        currSum += i;
        maxSum = max(currSum , maxSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }
    cout << maxSum;
}