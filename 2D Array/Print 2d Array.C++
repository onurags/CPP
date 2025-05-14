#include<iostream>
using namespace std;

int main(){
    int matrix[4][3] = {{4, 3, 5}, {2, 3, 1},{4, 2, 3},{9, 8, 2}};
    int row = 4;
    int col = 3;

for(int i = 0; i<row; i++){
    for(int j = 0; j<col; j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}
