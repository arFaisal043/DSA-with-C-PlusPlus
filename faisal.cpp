#include<iostream>
using namespace std;

int main() {
    int size = 4 , start = 0 , end = size - 1;
    int temp;
    int arr[] = {1 , 2  , 3 , 4 , 5};

    while(start <= end) {
        //swap(arr[start] , arr[end]);
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for(int i = 0 ; i < size ; i++) {
        cout << arr[i] << " ";
    }
}


// #include <iostream>
// using namespace std;

// int main() {
    
//     int size = 8 , capacity = 100 , count = 0;
//     int arr[capacity] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8};

//     for(int i = 0 ; i < size ; i++) {

//         if (arr[i] % 2 == 0)
//         {
//             cout << arr[i] << " ";
//             count++;

//             for (int i = size - 1; i < size + 1; i++)
//             {

//                 arr[i] = arr[i + 2];
//             }
//             size -= 2;
//         }
//     }
//     cout << "count: " << count << endl;

//     // for(int i = size - 1 ; i < size + 1 ; i++) {

//     //     arr[i] = arr[i + 2];
//     // }
//     // size -= 2;

//     // for(int i = 0 ; i < size ; i++) {

//     //     cout << arr[i];
//     // }

// }

