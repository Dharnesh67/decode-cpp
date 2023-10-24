#include <iostream>
using namespace std;
int main()
{
    int a[9] = {1,3,2,4,7,9,11,6,89};
    int m1, m2, m3;
    m1 = m2 = m3 = a[0];
    for (int i = 0; i < 9; i++)
    {
        if (a[i] > m1)
        {
            m1 = a[i];
        }
    }
    for (int i = 0; i < 9; i++)
    {
        if (a[i] > m2 && a[i] != m1)
        {
            m2 = a[i];
        }
    }
    for (int i = 0; i < 9; i++)
    {
        if (a[i] > m3 && a[i] != m1 && a[i] != m2)
        {
            m3 = a[i];
        }
    }

    cout << "the three largest numbers inn given array are " << m1 << " " << m2 << " " << m3;
}
