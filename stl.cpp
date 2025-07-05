#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comparator(pair<int , int>p1 , pair<int , int>p2) {
        if(p1.second < p2.second) {
            return true;
        }
        else {
            return false;
        }
    }

int main() {

    vector< pair<int , int> > vec = {{3 , 2} , {2 , 1} , {7 , 1} , {5 , 2}};
    sort(vec.begin() , vec.end() , comparator);

    for(auto val : vec) {
        cout << val.first << " " << val.second << endl;
    }

    return 0;
}















/*

Sort a pair in Vector:

int main() {

    vector< pair<int , int> > vec = {{3 , 2} , {2 , 1} , {7 , 1} , {5 , 2}};
    sort(vec.begin() , vec.end());

    for(auto val : vec) {
        cout << val.first << " " << val.second << endl; // sorting Ascending order by 1st elm
    }

    return 0;
}
Output: 
2 1
3 2
5 2
7 1  

Task:  Sorting Ascending order by 2nd elm --> We have to use custom function

bool comparator(pair<int , int>p1 , pair<int , int>p2) {
        if(p1.second < p2.second) {
            return true;
        }
        else {
            return false;
        }
    }

int main() {

    vector< pair<int , int> > vec = {{3 , 2} , {2 , 1} , {7 , 1} , {5 , 2}};
    sort(vec.begin() , vec.end() , comparator);

    for(auto val : vec) {
        cout << val.first << " " << val.second << endl;
    }

    return 0;
}








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



MAP:

int main() {

    map<string , int> m;
    m["Laptop"] = 100000;
    m["TV"] = 5000;
    m["AC"] = 40000;
    for(auto val : m) {
        cout << val.first << " " << val.second << endl;
    }
    return 0;
}


*/