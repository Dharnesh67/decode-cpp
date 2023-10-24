#include <iostream>
using namespace std;
int main()
{    // anti clockwise rotation
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            b[i][j] = a[j][i];
        }
        cout << endl;
    }
    for (int i = 2; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            for (int j = 2; j >= 0; j--)
            {

                cout << b[i][j] << "  ";
            }
        }
        else
            for (int j = 0; j < 3; j++)
            {

                cout << b[i][j] << "  ";
            }

        cout << endl;
    }
}