#include<iostream>
#include<unordered_set>
using namespace std;
int main(){

    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    // prnting 
    // uding for each loop
    for (int i:s)
    {
       cout<<i<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    cout<<endl;
    if (s.find(5)!=s.end()) cout<<"TRUE";
    else cout<<"FLASE";
    cout<<endl;
    return 0;
}