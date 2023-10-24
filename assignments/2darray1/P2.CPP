#include <iostream>
using namespace std;
int main()
{ // here it is necesarry to give the size of matrix
    int a[5][5];

    for (int  i = 0; i <5; i++)
    {
       for (int j = 0; j<5; j++)
       {
            a[i][j]=10;
       }
       
    }
    
    for (int i = 0; i < 5; i++) /// i is for rows
    {
        for (int j = 0; j < 5; j++) // j is for columns
        {
            cout << a[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;
}