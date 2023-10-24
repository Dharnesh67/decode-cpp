#include <iostream>
using namespace std;
int main()
{
    int a, b, q;
    cin >> a >> b;
    q = a / b;
    cout << "remainder is " << a - (b * q);
// or use %
    return 0;
}