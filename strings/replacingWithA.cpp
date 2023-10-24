#include <iostream>
using namespace std;
int main()
{
   string a;
   getline(cin,a);
 
   for (int  i = 0;a[i]!='\0'; i++)
   {
        if (i%2==0)
        {
            a[i]= 'a';
        }    

   }
   cout<< a;
 
}