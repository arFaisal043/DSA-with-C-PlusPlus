#include <iostream>
using namespace std;


int main() {
    return 0;
}








// <<-------------------- CONDITIONAL STATEMENT --------------------->>

// Find character lowercase or uppercase:-
    // char ch;
    // cout << "enter character: ";
    // cin >> ch;

    // if(ch >= 'a' && ch <= 'z') {
    //     cout << "this is lowercase" << endl;
    // }
    // else {
    //     cout << "this is uppercase" << endl;
    // }

    // another way:

    // if(ch >= 65 && ch <= 90) cout << "Uppercase" << endl;
    // else cout << "lowercase";

// <<-------------------- Ternary STATEMENT --------------------->>   

// int main() {

//     char ch;
//     cout << "enter character: ";
//     cin >> ch;

//     cout << (ch >= 65 && ch <= 90 ? "Uppercase" : "lowercase") << endl;

//     return 0;
// }



// <<-------------------- LOOPS --------------------->> 



// int main() {

//     int count = 0;
    
//     while(count <= 5) {
//         cout << count << " ";
//         count++;
//     }
//     cout << endl;

//     return 0;
// }


// prob 1: Sum of numbers from 0 to n;

// int main() {

//     int n ; 
//     cout << "Enter n: ";
//     cin >> n;
//     int sum = 0;
    
//     for(int i = 0 ; i < n ; i++) {
//         sum += i; //sum = sum + i
//     }
//         cout << "sum = " << sum;

//     return 0;
// }


// prob 2: Sum of all Odd numbers from 1 to n

// Using for loops

// int main() {
//     int n;
//     int sum = 0;
//     cout << "enter n : ";
//     cin >> n;

//     for (int i = 1 ; i <= n ; i++) {

//         if(i % 2 != 0) {
//             sum += i;
//             cout << "i = " << i << " " << endl;
//         }
//     }
//     cout << "sum = " << sum ;

//     return 0;
// }

// Using while loops

    // int i = 1;

    // while (i <= 10)
    // {
    //     if(i % 2 != 0) {
    //         sum += i;
    //         cout << "i = " << i << endl;
    //     }
    //     i++;
    // }
    // cout << "Sum = " << sum;



// prob 3: Check the Number is prime or Not?    


// int main() {
//     bool isPrime = true;
//     int n;
//     cout << "enter a number: ";
//     cin >> n;

//     for(int i = 2 ; i <= n-1 ; i++) {       // or (i = 2 ; i * i <= n ; i++)
//         if(n % i == 0){ // non prime
//             isPrime = false;
//             break;
//         }
//     }
    
//     if(isPrime == true) {
//         cout << "prime number\n";
//     }
//     else {
//         cout << "non prime number\n";
//     }
    
//     return 0;
// }


// prob 3: Sum of all number from 1 to n which are divisible by 3.

// int main() {

//     int sum = 0;
//     int n = 10;

//     for(int i = 1 ; i <= n ; i++) {

//         if(i % 3 == 0) {
//             sum += i;
//         }
//     }
//     cout << sum;
    
//     return 0;
// }


// prob 4: print factorial Number.



// <<-------------------- Nested Loops --------------------->> 

/*
prob1: print this 
# # # # 
# # # #
# # # # 
# # # #

int main() {
    
    int i , j;
    
    for(i = 1 ; i <= 4 ; i++) {
        for(int j = 1 ; j <= 4 ; j++) {
        cout << "# " ;
        }
        // cout << i;
        cout << endl;
    }
    

    return 0;
}


Prob2: 
ABCD
ABCD
ABCD
ABCD

int main() {
    
    int n = 4;
    
    for(int i = 0 ; i < n ; i++) {

        for(char j = 65 ; j < 69 ; j++) {
            cout << j ;
        }
        cout << endl;
    }

    return 0;
}


prob3:
1 2 3
4 5 6
7 8 9

int main() {

    int n = 3;
    int num = 1;

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cout << num;
            num++;
        }
        cout << endl;
    }
    return 0;
}

prob4:
A
AB
ABC

int main() {
    char n = 66;
    int num = 1;

    for(int i = 0 ; i < 3 ; i++) {
        for(char j = 65 ; j < n ; j++) {
            cout << j;
        }
        n++;
        cout << endl;
    }
    return 0;
}


*/
