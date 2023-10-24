#include <iostream>
using namespace std;
int main()
{
   string a;
   getline(cin,a);
   string j ="";
   for (int  i = 0;i<a.size(); i++)
   {
      
        j = a[i]+j;

   }
 
   if (j==a)
   {
     cout<<"TRUE";
   }
   else cout<<"false";
   
   
}