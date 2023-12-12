#include <iostream>
using namespace std;
int main()
{

    int a[4][4] = {1, 2, 3,4,5,6,7,8,9,10,11,12,13,14,15,16}; // transpose of a matrice

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <4; j++)
        {

            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {                                   // complex thing  refer to the screen shot of 1:39 2d array
        for (int j = i+1; j < 4; j++) // this is called column wise printing
        {
            // int temp = a[i][j];
            // a[i][j] = a[j][i];
            // a[j][i] = temp;
            swap(a[i][j],a[j][i]);
            // swap  the numbers
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 3;j>=0; j--)    // hhere we reverse the single line of matrix
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}