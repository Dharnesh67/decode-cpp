#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
// ascending order me rahega 
    set<int>s;
    s.insert(1);
    s.insert(3);
    s.insert(15);
    s.insert(5);
    for (auto x: s)
    {
        cout<<x<<" ";
    }
    return 0;
}