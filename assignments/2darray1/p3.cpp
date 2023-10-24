#include <iostream>
using namespace std;
int main()
{ // here it is necesarry to give the size of matrix
    int n, m;
    cout << " enter rows and columns";
    cin >> n >> m;

int a[n][m];
  cout << "enter the matrix";    // it is pending 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int l1, r1, l2, r2;
    cout << " enter the coordinates";
    cin >> l1, r1, l2, r2;
  
    int sum = 0;
    for (int i = min(l1, l2); i <= max(l1, l2); i++) /// i is for rows
    {
        for (int j = min(r1, r2); j <= max(r1, r2); j++) // j is for columns
        {
            sum = sum +a[i][j];
        }
        cout << endl;
    }
    cout << "the AREA of ectangle is" << sum;
    return 0;
}