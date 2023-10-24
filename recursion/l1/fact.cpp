#include <iostream>
using namespace std;
int fact(int n,int a)
{ 

   if (n == 0)  return a;

a = n * fact(n - 1,a);
}
int main()
{int n ;
cin>>n;
    for (int i = 0; i <=n; i++)
    {
        cout<<fact(i,1)<<endl;
    }
    
}