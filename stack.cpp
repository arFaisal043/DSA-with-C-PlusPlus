#include <iostream>
#include <vector>
using namespace std;
#define MAX 4 //int stack_arr[4];

int stack_arr[MAX];
int top = -1;


// Display
void display() {
    int i;
    if(top == -1) {
        cout << "Stack overflow";
        return;
    }
    for(i = top; i >= 0; i--) {
        cout << stack_arr[i] << " ";
    }
}

// Isfull() check
int isFull() {
    if(top == MAX - 1) { 
        return 1;
    }
    else {
        return 0;
    }
}

// isEmpty check
int isEmpty() {
    if(top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}


// Pop Ops
int pop() {
    int val;

    if(isEmpty()) {
        cout << "Stack Underflow";
        exit(1); // it's means abnormal termination of the program.(fail)
    }
    val = stack_arr[top];
    top = top - 1;
    return val;
}



// Push Ops
void push(int data) {

    // checking stack is full or not
    if(isFull()) { // if(top == MAX - 1) 
        cout << "Stack Overflow" << endl;
        return; //indicates the end of the function
    }

    top = top + 1; // (now in top = 0) increment the top
    stack_arr[top] = data;
}

int main() {
    int data; // for storing the deleted val
    push(1); // top = 0
    push(2); // top = 1
    push(3); // top = 2
    push(4); // top = 3

    for(int i : stack_arr) {
        cout << "Stack element is: " << i << endl;
    }

    data = pop(); // for storing the deleted val
    data = pop(); // for storing the deleted val

    // After Pop ops
    cout << "After pop ops:" << " ";
    display();

    return 0;
}


/*

<---- Array implementation of stack ---->

*/