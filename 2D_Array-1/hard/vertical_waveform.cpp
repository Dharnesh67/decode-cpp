#include <iostream>
using namespace std;
int main() // a has mcross n order
// b has p cross q oorder
// so c has order of m cross q and multiply only when>> n and p are same
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 3; i++)
    {
       if (i%2!=0)
       {
           for (int j = 2; j>=0; j--)
           {    // agar index of i odd h to reverse karna 
           //h warna seedhe hi print karwa do
              cout << a[j][i] << "  ";  // column matrix print karte h  also used for transpose 
           }
           
       }
       else{
       for (int j =0;j<3;j++) // i  agar even h to ye chalao 
       {
         cout << a[j][i] << "  ";
       }}
       /**/
        
    }
}