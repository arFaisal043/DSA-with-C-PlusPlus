#include <iostream>
using namespace std;

int main() {
    int targetValue = 99 , size = 5;
    int arr[100] = {7 , 8 , 12 , 27 , 88};
     arr[size] = targetValue;
     size++;

     for(int i = 0 ; i < size ; i++) {
        cout << arr[i] << " ";
     }

    return 0;
}