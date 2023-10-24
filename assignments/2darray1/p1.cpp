#include <iostream>
using namespace std;
int main()
{ // here it is necesarry to give the size of matrix
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int b[3][3] = {
        {4, 5, 8},
        {0, 0, 8},
        {1, 2, 0},
    };
    for (int i = 0; i < 3; i++) /// i is for rows
    {
        for (int j = 0; j < 3; j++) // j is for columns
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}