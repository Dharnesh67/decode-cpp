#include <iostream>
using namespace std;
int pow(int a, int b)
{ if(b==1) return a;
    // if (b == 1)
    //     return a;
    return a * pow(a, b - 1); // a raised to power b
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << pow(a, b);
}