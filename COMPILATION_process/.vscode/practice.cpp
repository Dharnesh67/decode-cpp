#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
      int mx=-1;
   for (int i = 3/2; i >= 1; i--)
    {
        if (3 % i == 0) // bigo of  squrt n wala code
        {
           mx=max(mx,3/i);
        }
    }
    cout<<mx;
        return 0;
}