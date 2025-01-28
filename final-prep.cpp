#include <iostream>
using namespace std;

#define MAX 10
int queueArr[MAX];
int front = -1;
int rear = -1;

void enqueue();
void dequeue();
void display();
int isFull();
int isEmpty();

int isFull() {
    if(rear == MAX - 1) {
        return 1;
    }
    else {
        return 0;
    }
}

int isEmpty() {
    if(front == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

void enqueue() {
    if(isFull()) {
        cout << "Overflow";
    }
    else {
        if(front == -1) {
            front = 0;
            int item;
            cout << "Insert: ";
            cin >> item;
            rear++;
            queueArr[rear] = item;
        }
    }
}

void dequeue() {
    if(isEmpty()) {
        cout << "Underflow";
    }
    else {
        cout << "dequeue elm is: ";
        int data = queueArr[front];
        front++;
    }
}

void display() {
    for(int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
}



int main() {

    int choice;

    while(1) {
        cout << "1. Enqueue Ops: " << endl;
        cout << "2. Dequeue Ops: " << endl;
        cout << "3. Display the queue: " << endl;
        cout << "4. Exit: " << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice){
            case 1:
                 enqueue();
                 break;
            case 2:
                 dequeue();
                 break;
            case 3:
                 display();
                 break;
            case 4:
                 exit(0);
            default:
                 cout << "Incorrect choice";
        }
    }

    return 0;
}