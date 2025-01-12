#include<iostream>
using namespace std;

void printBack(int i, int n){
    if(i<1){
        return;
    }
    printBack(i-1, n);
    cout<<i<<" ";

}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin >> n;
    printBack(n, n);
    return 0;
}

// //Numbers from N to 1 

// #include<iostream>
// using namespace std;

// void printBack(int i, int n){
//     if(i>n){
//         return;
//     }
//     printBack(i+1, n);
//     cout<<i<<" ";

// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin >> n;
//     printBack(1, n);
//     return 0;
// }
