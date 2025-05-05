//Selection Sort

#include<iostream>
using namespace std;

int main(){
    int arr[7] = {10, 8, 6, 5, 7, 4, 2};

    for(int i = 0; i<7; i++){
        int index = i;

        for(int j = i+1; j<7; j++){
            if(arr[j] < arr[index])
            index = j;
        }
        swap(arr[i], arr[index]);
    }

    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}