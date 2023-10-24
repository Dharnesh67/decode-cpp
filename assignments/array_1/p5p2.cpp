#include <iostream>
using namespace std;
int main()
{
   


    int a[9] = {1, 2, 3, 44, 55, 33, 6, 7, 8};
   for (int i = 0; i <9; i++)
   {
            if (i%2!=0)
            {
                a[i]*=2;
            }
           else a[i]+=10; 

   }
   
 for (int i = 0; i <9; i++)
   {
          cout<<a[i]<<" ";
   }
}
