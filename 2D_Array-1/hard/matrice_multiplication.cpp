#include <iostream>
using namespace std;
int main() // a has mcross n order
// b has p cross q oorder
// so c has order of m cross q and multiply only when>> n and p are same
{
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    int b[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int c[2][4]; // this is a resultant matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        { // multiply    >> c[i][j]=  a[i][k]*b[k][j]
            c[i][j] = 0;
            for (int k = 0; k < 3 /* common index in both matices is 3*/; k++)
            {
                c[i][j] += a[i][k] * b[k][j]; // multiplly k baar hoga jo common index h dono me 
            }
        }
        cout << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        { // printing
            cout << c[i][j] <<"  ";
        }
        cout << endl;
    }
}