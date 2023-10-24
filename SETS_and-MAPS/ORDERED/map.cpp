#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
// ascending order me rahega 
    map<int,int>m;
    m[7]=2;
    m[3]=4;
    m[5]=6;
    m[1]=8;
    m[9]=10;
    for (auto x: m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}