#include<bits/stdc++.h>
using namespace std;

// Row Sum
int getMaxRowSum(int mat[][3], int row, int col){
    int rowMax = INT_MIN;

    for(int i = 0; i<row; i++){
        int maxim = 0;
        for(int j = 0; j<col; j++){
            maxim += mat[i][j];
        }
        rowMax = max(rowMax, maxim);
    }
    return rowMax;
}

// Column Sum
int getMaxColSum(int mat[][3], int row, int col){
    int colMax = INT_MIN;

    for(int i = 0; i<col; i++){
        int maxim = 0;
        for(int j = 0; j<row; j++){
            maxim += mat[j][i];
        }
        colMax = max(colMax, maxim);
    }
    return colMax;
}
int main(){
    int matrix[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int row = 3;
    int col = 3;

    cout<<getMaxRowSum(matrix, row, col)<<endl;
    cout<<getMaxColSum(matrix, row, col);

    return 0;
}
