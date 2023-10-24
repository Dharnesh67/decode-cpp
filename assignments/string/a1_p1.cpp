#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
   string a;
   getline(cin,a);
   int n = a.length();
    
   for (int i = 0; i <n; i++)
   {
    if (i%2!=0)
    {
        a[i]='#';
    }
    
   }
   cout<<a;

  
}