#include<iostream>
#include<vector>
using namespace std;


int maxColSum(int matrix[][3], int rows, int cols) {
    int maxSum = INT_MIN;

    for (int j = 0; j < cols; j++) { 
        int colSum = 0;
        for (int i = 0; i < rows; i++) { 
            colSum += matrix[i][j];
        }
        maxSum = max(maxSum, colSum); 
    }
    return maxSum;
}


int maxRowSum(int matrix[][3], int rows, int cols){
    int maxRowSum = INT_MIN;

    for(int i = 0; i < rows; i++) {
        int rowSum = 0;
        for(int j = 0; j < cols; j++) {
            rowSum += matrix[i][j]; // 6, 15, 24
        }
        maxRowSum =  max(maxRowSum , rowSum);
    }
    return maxRowSum;
}

int main() {
    
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4, cols = 3;
    
    cout << "Max Row Sum = " << maxRowSum(matrix,rows, cols);
    cout << endl;
    cout << "Max Col Sum = " << maxColSum(matrix,rows, cols);
}
    

/*

-- Print Output of Matrix:
int main() {
    int rows = 4, cols = 3;
    int matrix[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "matrix[" << i << "][" << j << "] = " << matrix[i][j] << endl;
        }
    }
}

output:
matrix[0][0] = 1
matrix[0][1] = 2
matrix[0][1] = 2
matrix[0][2] = 3
matrix[1][0] = 4
matrix[1][1] = 5
matrix[1][2] = 6
matrix[2][0] = 7
matrix[2][1] = 8
matrix[2][2] = 9
matrix[3][0] = 10
matrix[3][1] = 11
matrix[3][2] = 12



-- Take Input of Matrix:
int main() {
    int rows = 4, cols = 3;
    int matrix[rows][cols];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}





-- Linear Search on 2D Array: Output will either True or False

bool linearSearch(int matrix[][3], int rows, int cols, int target){

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}


int main() {
    
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4, cols = 3;
    int target = 8;

    cout << linearSearch(matrix, rows, cols, target);
}





-- Linear Search on 2D Array: Output will cell val (i , j)

pair<int , int> linearSearch(int matrix[4][3], int rows, int cols, int target){

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] == target) {
                return {i , j};
            }
        }
    }
    return {-1 , -1};
}

int main() {
    
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4, cols = 3;
    int target = 8;

    pair<int , int> res =  linearSearch(matrix, rows, cols, target);
    cout << res.first << "," << res.second;
}




-- Sum of total 2D matrix:

int sum(int matrix[4][3], int rows, int cols, int target){
    int sum = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {
    
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4, cols = 3;
    int target = 8;

    cout << sum(matrix, rows, cols, target);;
}




-- Max Row Sum On 2D Array:

int maxColSum(int matrix[][3], int rows, int cols) {
    int maxSum = INT_MIN;

    for (int j = 0; j < cols; j++) { 
        int colSum = 0;
        for (int i = 0; i < rows; i++) { 
            colSum += matrix[i][j];
        }
        maxSum = max(maxSum, colSum); 
    }
    return maxSum;
}


int maxRowSum(int matrix[][3], int rows, int cols){
    int maxRowSum = INT_MIN;

    for(int i = 0; i < rows; i++) {
        int rowSum = 0;
        for(int j = 0; j < cols; j++) {
            rowSum += matrix[i][j]; // 6, 15, 24
        }
        maxRowSum =  max(maxRowSum , rowSum);
    }
    return maxRowSum;
}

int main() {
    
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4, cols = 3;
    
    cout << "Max Row Sum = " << maxRowSum(matrix,rows, cols);
    cout << endl;
    cout << "Max Col Sum = " << maxColSum(matrix,rows, cols);
}

*/