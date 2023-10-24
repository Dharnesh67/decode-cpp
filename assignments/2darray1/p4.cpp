#include <iostream>
using namespace std;
int main()
{ // here it is necesarry to give the size of matrix
    int a[4][4] = {1, 3, 4, 6, 2, 4, 5, 7, 3, 5, 6, 8, 4, 6, 7, 9};

    for (int i = 0; i < 4; i++) /// i is for rows
    {
        for (int j = 0; j < 4; j++) // j is for columns
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int max = 0;

    for (int i = 0; i < 4; i++) /// i is for rows
    {
        for (int j = 0; j < 4; j++) // j is for columns
        {
            if (max < a[i][j])
            {    max = a[i][j];
            }
        }
       
    }
      cout<<" the maximum  number is "<< max;
    return 0;
}