#include<iostream>
using namespace std;

int main(){
    int matrix[4][3];
    int row = 4;
    int col = 3;

    //input
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col;j++){
            cin>>matrix[i][j];
        }
    }

    //output
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
