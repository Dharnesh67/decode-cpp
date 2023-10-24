#include <iostream>
using namespace std;
int main()
{
    int a[9] = {1, 2, 3, 44, 55, 33, 6, 7, 8};
      int x;
      cin>>x;
      int count=0;
      for (int i = 0; i <9; i++)
      {
          if (a[i]>x)
            {
               count++;

            }
      
      }
      cout<<count;
  

}

