#include<iostream>
using namespace std;

bool linearSearch(int mat[][3], int row, int col, int tar){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(mat[i][j] == tar){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int matrix[4][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9},{10, 11, 12}};
    int row = 4;
    int col = 3;

    cout<<linearSearch(matrix, row, col, 21);

    return 0;
}
