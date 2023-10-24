#include <iostream>
using namespace std;
int main()
{ // here it is necesarry to give the size of matrix
    int m, n;
    // m .. rows >> roll number

    // n.. columns >> marks
    cin  >> n;
    int a[2][n];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}