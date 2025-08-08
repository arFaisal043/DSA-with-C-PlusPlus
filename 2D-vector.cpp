#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6, 69}, {7, 8, 9}, {10, 11, 12}};
    

    return 0;
}





/*
-- print 2d matrix in vector:
int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int i = 0; i < matrix.size(); i++) { // Rows = matrix.size()
        for(int j = 0; j < matrix[i].size(); j++) { // Cols = matrix[0/1/2...].size()
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



-- Find How many Rows and Column in 2D vector:
vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    cout << matrix.size() << endl; // rows
    cout << matrix[0].size(); // columns

*/