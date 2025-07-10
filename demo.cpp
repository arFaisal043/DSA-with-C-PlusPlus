#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int tribonacci(int n) {
    if(n == 0) return 0;
    else if(n == 1 || n == 2) return 1;

    int firstTerm = 0, secTerm = 1, thirdTerm = 1;
    for(int i = 0; i < n; i++) {
        int fourthTerm = firstTerm + secTerm + thirdTerm;
        firstTerm = secTerm;
        secTerm = thirdTerm;
        thirdTerm = fourthTerm;
    }
    return firstTerm;
}

int main() {
    int n;
    cin >> n;
    cout << "Output: " << tribonacci(n);

    return 0;
}


