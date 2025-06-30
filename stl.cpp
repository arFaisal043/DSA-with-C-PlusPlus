#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    pair<int , pair<int , string>> p = {1 , {2 , "Faisal"}};
    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;

    return 0;
}















/*

Iterators in Vector:

(for forward iteration) =>

int main() {

    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int>:: iterator itr; // Declared a iterator
    for(itr = vec.begin(); itr != vec.end(); itr++) {
        cout << *(itr) << " ";
    }

    return 0;
}

(for Backward iteration) =>

int main() {

    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int>:: reverse_iterator itr; // Declared a iterator for backward
    for(itr = vec.rbegin(); itr != vec.rend(); itr++) {
        cout << *(itr) << " ";
    }

    return 0;
}

auto for replace to the iterations declared:
    vector<int> vec = {1, 2, 3, 4, 5};
    for(auto itr = vec.rbegin(); itr != vec.rend(); itr++) {
        cout << *(itr) << " ";
    }

*/