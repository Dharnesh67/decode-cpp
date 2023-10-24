#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
   string a;
   getline(cin,a);
   int n = a.length();
   string b="";
   for (int i = 0; i <n; i++)
   {
      b=a[i]+b;
    
   }
   cout<<a+b;

  
}