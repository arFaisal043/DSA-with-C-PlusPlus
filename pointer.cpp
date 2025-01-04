#include<iostream>
using namespace std;

int main() {
    int *ptr1;
    int *ptr2 = ptr1;
    cout << (ptr1 != ptr2);

    return 0;
}

/*

-- Pointer to Pointer --

int main() {
    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;

    cout << &a << endl; // 0x61fe14
    cout << ptr1 << endl; // 0x61fe14

    cout << &ptr1 << endl; // 0x61fe08
    cout << ptr2 << endl; // 0x61fe08
}



-- De-reference Operator --

int main() {
    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;

    cout << &a << endl; //0x61fe14
    cout << ptr << endl; //0x61fe14

    cout << *(&a) << endl; // 10
    cout << *(ptr) << endl; // 10
    cout << **(ptr2); // 10
}


-- Null Pointer --

int main() {
    int *ptr = NULL;
    cout << ptr;
}

*/