#include<bits/stdc++.h>

using namespace std;

int main() {

    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(5);

    // l.pop_back();
    // l.pop_front();

    // cout<<l.front()<<" "<<l.back()<<endl;
    // cout<<l.size();

    for(auto i = l.rbegin(); i!= l.rend(); i++){
        cout<<*i<<" ";
    }
    return 0;
}
