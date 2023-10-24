#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n + 1 - i; j++)
        {
            cout <<" ";
            /* upar wala part of v like hollow pyramid */
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {

            cout << "*";
        }

        cout << endl;

        /* code */
    }

    for (int i = 1; i <= n; i++)
    { // same code of v

        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (i == j || i + j == 2 * n)
            {
                cout << "*";
            }
            else
                cout << " ";
        }

        cout << endl;
    }
    return 0;
}