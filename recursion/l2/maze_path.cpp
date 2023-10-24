#include <iostream>   //either one step or two step or their combination
using namespace std;
int maze(int r,int c,int n,int m)
{   
    if(r>n  || c> m ) return 0;   // 1:35
     if(r==n && c== m ) return 1;
    int rightways =maze(r,c+1,n,m);
    int downways =maze(r+1,c,n,m);
    return rightways+downways;

}
int main()
{   int n,m;
    cin >> n>>m;
    cout << maze(1,1,n,m);
}
