#include <iostream>
using namespace std;

int addSum(int a , int  b ) {
         int sum = a + b;
         return sum;
}

int main() {
    cout << addSum();
    return 0;
}



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




*/