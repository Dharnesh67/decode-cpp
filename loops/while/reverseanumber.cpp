#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int rvno = 0;
    while (x > 0)
    {
        rvno = x % 10;
        cout << rvno;
        x /= 10;

        /* code */
    }

    return 0;
}