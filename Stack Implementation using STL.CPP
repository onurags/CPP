#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> S;
    S.push(45);
    S.push(78);
    S.push(75);
    S.push(58);
    S.push(47);
    S.push(68);
    cout<<S.size()<<endl;
    // cout<<S.empty()<<endl;
    S.pop();
    cout<<S.size()<<endl;
    cout<<S.top()<<endl;

    return 0;
}
