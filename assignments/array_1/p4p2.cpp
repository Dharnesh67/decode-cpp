#include <iostream>
using namespace std;
int main()
{
    int m = 0, n = 0;

    int a[9] = {1, 2, 3, 44, 55, 33, 6, 7, 8};
    for (int i = 0; i < 9; i++)
    {
        if (i % 2 == 0)
        {
            m += a[i];

            // difference between the sum of elements at even place and sum of element at odd place
        }
        else
            n += a[i];
    }
    cout << "THE SUM IS  " << m - n;
    return 0;
}
