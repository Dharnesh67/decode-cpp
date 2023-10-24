#include<iostream>
#include<unordered_map>
using namespace std;
int main(){

    unordered_map<string,int>m;
    pair<string,int>p1;
    p1.first="dharmesh";
    p1.second=23;
    pair<string,int>p2;
    p2.first="raikwar";
    p2.second=2;
    m.insert(p1);
    m.insert(p2);
    for (pair<string,int> p: m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    for (auto p: m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}