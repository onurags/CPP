#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat1[3][3] = {{1, 2, 3},{5, 6, 7},{9, 10, 11}};
    //int mat2[4][4] = {{2, 1, 2, 5},{1, 8, 9, 5},{7, 8, 2, 3},{4, 5, 6, 9}};
   // int mat3[4][4];
    int n = 3;
   for(int i = 0; i<n; i++){
    int start = 0, end = n-1;
    while(start<end){
        swap(mat1[i][start], mat1[i][end]);
        start++;
        end--;
    }
   }

   for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
        cout<<mat1[i][j]<<" ";
    }
    cout<<endl;
   }

    return 0;
}
