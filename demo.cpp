#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool searchMatrix(int matrix[][5], int m, int n, int target) {
    int r = 0, c = n - 1;

    while(c >= 0 && r < m) {
        if(target == matrix[r][c]) return true;
        else if(target  < matrix[r][c]) c--;
        else r++;
    }
    return false;
}

int main() {
    int matrix[5][5] = { {1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30} };
    int m = 5, n = 5;
    int target = 5;
    cout << searchMatrix(matrix, m, n, target);

    return 0;
}
