#include <iostream>
#include <cstring> // Include this header file for str length function
using namespace std;















/*

<---- Array implementation of stack ---->


// Basic Of Stack

#define MAX 4; // preprocessor
int top = -1; // we will use multiple time the top .That's why we declared top at global


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

// Isfull() check  -->(If users want to know about stack is full or not before the pushing element)
int isFull() {
    if(top == MAX - 1) { 
        return 1; // stack is full
    }
    else {
        return 0; // stack is not full
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
    val = stack_arr[top]; // store top value.That is why deleted value can store
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










<----- Simple Stack Task ----->

Task 1: write a simple program. there will be,
1. push
2. pop
3. Print the top element
4. print all element of the stack
5. Quit



#include <iostream>
using namespace std;

#define MAX 5
int stackArr[MAX];
int top = -1;

int isFull() {
    if (top == MAX - 1) {
        return 1;
    } else {
        return 0;
    }
}

int isEmpty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}

void push(int data) {
    if (isFull()) {
        cout << "Stack Overflow" << endl;
        return;
    }
    top++;
    stackArr[top] = data;
}

int pop() {
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
        exit(1);
    }
    int val = stackArr[top];
    top--;
    return val;
}

int peek() {
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
        exit(1);
    }
    return stackArr[top];
}

void display() {
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
        exit(1);
    }

    for (int i = top; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, data;
    while (1) {
        cout << endl;
        cout << "Choose one" << endl;
        cout << "1. Push " << endl;
        cout << "2. Pop " << endl;
        cout << "3. Print the top element " << endl;
        cout << "4. Print all elements of the stack " << endl;
        cout << "5. Quit " << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to push: ";
                cin >> data;
                push(data);
                break;
            case 2:
                data = pop();
                cout << "Deleted element is: " << data << endl;
                break;
            case 3:
                data = peek();
                cout << "The top element is: " << data << endl;
                break;
            case 4:
                cout << "All elements in stack: ";
                display();
                break;
            case 5:
                return 0; // Exiting the main function to quit the program
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}










<---- Parenthesis Checker ----->


#include <iostream>
#include <cstring> // Include this header file for str length function
using namespace std;

#define MAX 100

// স্ট্যাক ডাটাটাইপের স্ট্রাকচার ডেফিনিশন
struct Stack {
    char stck[MAX]; // স্ট্যাক এলিমেন্ট রাখার জন্য একটি অ্যারে
    int top; // স্ট্যাকের শীর্ষ এলিমেন্টের ইনডেক্স ট্র্যাক করার জন্য একটি ভ্যারিয়েবল
} s;

// নতুন এলিমেন্ট স্ট্যাকে পুশ করার ফাংশন
void push(char item) {
    if (s.top == (MAX - 1)) { // যদি স্ট্যাক পূর্ণ থাকে
        cout << "Stack is Full\n"; // স্ট্যাক পূর্ণ মেসেজ প্রদর্শন
    } else {
        s.top = s.top + 1; // স্ট্যাকের শীর্ষ ইনডেক্স ইনক্রিমেন্ট করা
        s.stck[s.top] = item; // নতুন এলিমেন্ট যোগ করা
    }
}

// স্ট্যাক থেকে এলিমেন্ট পপ করার ফাংশন
void pop() {
    if (s.top == -1) { // যদি স্ট্যাক খালি থাকে
        cout << "Stack is Empty\n"; // স্ট্যাক খালি মেসেজ প্রদর্শন
    } else {
        s.top = s.top - 1; // স্ট্যাকের শীর্ষ ইনডেক্স ডিক্রিমেন্ট করা
    }
}

// দুটি প্যারেন্টেসিসের মিল পরীক্ষা করার ফাংশন
bool checkPair(char val1, char val2) {
    return ((val1 == '(' && val2 == ')') || 
            (val1 == '[' && val2 == ']') || 
            (val1 == '{' && val2 == '}')); // মিল আছে কিনা তা রিটার্ন করা
}

// প্যারেন্টেসিসের ব্যালেন্স পরীক্ষা করার ফাংশন
bool checkBalanced(char exp[], int len) {
    for (int i = 0; i < len; i++) {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{') {
            push(exp[i]); // ওপেনিং প্যারেন্টেসিস হলে পুশ করা
        } else {
            if (s.top == -1) // ক্লোজিং প্যারেন্টেসিসের জন্য যদি স্ট্যাক খালি থাকে
                return false; // ব্যালেন্স নেই
            else if (checkPair(s.stck[s.top], exp[i])) {
                pop(); // মিল থাকলে পপ করা
                continue;
            }
            return false; // মিল না থাকলে ব্যালেন্স নেই
        }
    }
    return s.top == -1; // স্ট্যাক খালি হলে ব্যালেন্স আছে, নাহলে নেই
}

int main() {
    char exp[MAX] = "({})[]{}"; // পরীক্ষা করার জন্য একটি এক্সপ্রেশন
    s.top = -1; // স্ট্যাকের ইনডেক্স ইনিশিয়ালাইজ করা

    int len = strlen(exp); // এক্সপ্রেশনের দৈর্ঘ্য
    checkBalanced(exp, len) ? cout << "Balanced\n" : cout << "Not Balanced\n"; // ব্যালেন্স আছে কিনা পরীক্ষা করে ফলাফল প্রদর্শন করা

    return 0;
}





*/