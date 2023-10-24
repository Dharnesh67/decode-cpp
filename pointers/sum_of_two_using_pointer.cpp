#include <iostream>
using namespace std;
int main()
{
    int x ;
    int y ;
   
    int *p = &x;
    int *q = &y;
     cin>>*p>>*q;
    cout << x+y;
    // int x,y;
    // int*p=&x;
    // cin>>*p;
    // cout<<x;
    return 0;
}