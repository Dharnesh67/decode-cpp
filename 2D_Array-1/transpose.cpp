#include <iostream>
using namespace std;
int main()
{

    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // transpose of a matrice

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) // this is called column wise printing
        {

            cout << a[j][i] << " "; // used for transposing we will make the column constant
        }
        cout << endl;
    }

    return 0;
}