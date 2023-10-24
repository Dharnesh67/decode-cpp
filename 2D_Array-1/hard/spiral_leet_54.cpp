#include <iostream>
using namespace std;
int main() /*
right down left up     .. pattern of printing    */

{
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int minr = 0, minc = 0, maxr = 2, maxc = 3; /*minimum and amximum rows and columns*/
    while (minr <= maxr && minc <= maxc)
    {
        // right
        for (int j = minc; j <= maxc; j++)
        {
            cout << a[minr][j] << " ";
        }

        minr++;
        if (minr >maxr || minc > maxc)
            break;
        // down
        for (int i = minr; i <= maxr; i++)
        {
            cout << a[i][maxc] << " ";
        }

        maxc--;
        if (minr > maxr || minc > maxc)
            break;
        // left
        for (int j = maxc; j >= minc; j--)
        {
            cout << a[maxr][j] << " ";
        }

        maxr--;
        if (minr > maxr || minc > maxc)
            break;
        // up
        for (int i = maxr; i >= minr; i--)
        {
            cout << a[i][minc] << " ";
        }

        minc++;
    }
}