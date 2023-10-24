#include <iostream>
using namespace std;

int main()
{
    int a=0;
    int* ptr=&a;
    cout<<ptr<<endl;//0x61ff08
    ptr+=1; // 4  bytes add ho rhi h idhar par because int 4 value store karta h 

    cout<<ptr; //0x61ff0c

    return 0;
}
