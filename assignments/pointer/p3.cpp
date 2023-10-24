#include <iostream>
using namespace std;

int main()
{
    int a= 10;
    int* ptr =&a;
    int b= *ptr +1;
    ptr =&b;
    cout<<*ptr<<" "<<a<<" "<<b;

    return 0;
}
