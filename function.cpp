#include<iostream>
using namespace std


//  int factorial(int n) {
//      int mul = 1;
//     for(int i = 1 ; i <= n ; i++) {
//         mul *= i;
//         // cout << i << endl;
//     }
//     return mul;
// }

// int nCr(int n , int r) {
//     int n_fact = factorial(n);
//     int r_fact = factorial(r);
//     int nmr_fact = factorial(n - r);

//     int nCr = n_fact / (nmr_fact * r_fact);

//     return nCr;
// }

// int main() {
//     // int n = 8 , r = 2;
//     cout << nCr(8 , 2);
// }




/*
--> Function Structure:

#include <iostream>
using namespace std;

int addSum() {
        int a = 20;
        int b= 10;
        int sum = a + b;
        return sum;
}

int main() {
    int val = addSum();
    cout << val;
    return 0;
}





---------- Pass By Value -----------

int sum(int a , int  b ) {
         int sum = a + b;
         return sum;
}

int main() {
    int x = 2 , y = 3;
    cout << sum(x , y);
    return 0;
}


*/


/*

prob1: Calculate sum of all digit of a Number

void SumOfDigit(int num) {

    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << sum;
}

int main() {
    SumOfDigit(123);
}




prob2 : find n factorial. [n = 6]

int main() {
    int mul = 1;
    for(int i = 6 ; i > 0 ; i--) {
        mul *= i;
        cout << i << endl;
    }
    cout << "mul = " << mul;
}



prob3 : Calculate nCp Binomial Coefficient for n & r

int factorial(int n) {
    int mul = 1;
    for(int i = 1 ; i <= n ; i++) {
        mul *= i;
        // cout << i << endl;
    }
    return mul;
}

int nCr(int n , int r) {
    int n_fact = factorial(n);
    int r_fact = factorial(r);
    int nmr_fact = factorial(n - r);

    int nCr = n_fact / (nmr_fact * r_fact);

    return nCr;
}

int main() {
    // int n = 8 , r = 2;
    cout << nCr(8 , 2);
}



*/