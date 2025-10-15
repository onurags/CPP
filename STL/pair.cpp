//pair

#include<bits/stdc++.h>
using namespace std;

int main (){
    // pair <string, int> p;
    // p = make_pair("abc", 1);
    // p.first = "abc";
    // p.second = 1;
    // p = {"xyz", 26};



    // pair<string, pair<int, int>> p;
    // p.first = "Anurag";
    // p.second.first = 20;
    // p.second.second = 30;
    

    pair<pair<string, int>, int> p;
    p.first.first = "Ganvir";
    p.first.second = 20;
    p.second = 60;

    cout<<p.first.first<<" "<<p.first.second<<" "<<p.second<<endl;

    return 0;
}
