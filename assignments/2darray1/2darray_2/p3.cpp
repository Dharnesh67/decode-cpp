#include <iostream>
using namespace std;
int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << a[i][j] << "  ";
        }
        cout << endl<<endl;
    }
 
    for (int i = 0; i <3; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j<3; j++)
            {

                cout << a[j][i] << "  ";
            }
        }
        else
            for (int j = 2; j>=0; j--)
            {

                cout << a[j][i] << "  ";
            }

  
    }
}