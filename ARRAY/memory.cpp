#include <iostream>
using namespace std;
int main()
{
   int a[5];
   
   for (int i = 0; i <5; i++)
   {
    cout<<&a[i]<<endl;
   }
// 0x61fef8 4 byte ka gap h bas 
// 0x61fefc
// 0x61ff00 lagatar gherta h array 
// 0x61ff04
// 0x61ff08
// 0 1 2 3 4 5 6 7 8 9 a b c d e f  hexa decimal counting

    return 0;
}
