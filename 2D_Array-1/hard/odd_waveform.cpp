#include <iostream>
using namespace std;
int main() // a has mcross n order
// b has p cross q oorder
// so c has order of m cross q and multiply only when>> n and p are same
{
    int a[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16};

    for (int i = 0; i < 4; i++)
    {
       if (i%2==0)
       {
           for (int j = 3; j>=0; j--)
           {    // agar index of i odd h to reverse karna 
           //h warna seedhe hi print karwa do
              cout << a[i][j] << "  ";
           }
           
       }
       else{
       for (int j =0;j<4;j++) // i  agar even h to ye chalao 
       {
         cout << a[i][j] << "  ";
       }}
       /**/
        
    }
}