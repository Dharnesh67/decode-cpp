#include <iostream>
using namespace std;
int main()
{
   string a;
   getline(cin,a);
   int count =0;
   for (int  i = 0;a[i]!='\0'; i++)
   {

        if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
           
        }
        else count++;

   }
   
   cout<<count;
}