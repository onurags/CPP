#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat1[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}, {13, 14, 15, 16}};
    //int mat2[4][4] = {{2, 1, 2, 5},{1, 8, 9, 5},{7, 8, 2, 3},{4, 5, 6, 9}};
   // int mat3[4][4];
   int n = 4;
    
   int sum = 0;
   for(int i = 0; i<4; i++){
    for(int j = 0; j<4; j++){
        if(i == j){
            sum += mat1[i][j];
        } else if (i == n-1-i){
            sum += mat1[i][j];
        }
    }

   }
   cout<<sum<<endl;

    return 0;
}
