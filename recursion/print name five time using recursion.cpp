#include<iostream>
using namespace std;

void printName(int i, int n){
    if(i > n){
        return;
    }
    cout<<"Data"<<endl;
    printName(i+1, n);

}

int main(){
    printName(1, 5);
    return 0;
}
