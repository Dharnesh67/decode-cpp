#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
   int*p1=&a;
   int*p2=&b;
   cout<<" the product of the numbers is  "<<*p1*(*p2);

    return 0;
}
