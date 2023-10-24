#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a = b = c)
    {
        cout << "it is a equilateral triangle";
        /* code */
    }
    else if ((a + b) > c || (b + c) > a || (c + a) > b)
    {
        cout << "the triangle is isoceles";
        /* code */
    }

    return 0;
}