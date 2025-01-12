#include <iostream>
#include <vector>
using namespace std;



int main() {
    vector<int> arr = {0 , 1 , 0 , 3 , 12};
    

    for(int i : arr) {
        cout << i << " ";
    }
}