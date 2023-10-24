#include <iostream>
using namespace std;
int main()
{ // here it is necesarry to give the size of matrix
    int a[4][7] = {
        {1, 2, 4, 7, 5, 5, 6},
        {2, 3, 4, 5, 6, 7, 7},
        {2, 3, 4, 5, 6, 7, 7},
        {2, 3, 4, 5, 6, 7, 7}};
    for (int i = 0; i < 4; i++) /// i is for rows
    {
        for (int j = 0; j < 7; j++) // j is for columns
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}