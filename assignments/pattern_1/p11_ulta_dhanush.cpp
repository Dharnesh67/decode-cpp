#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int nst = 1, nsp = n - 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {

        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
            /* code */
        }
        if (i >= n)
        {
            nsp++;
        }
        else
            nsp--;
        for (int j = 1; j <= nst; j++)
        {
            cout << "*";
            /* code */
        }
        if (i >= n)
        {
            nst--;
            /* code */
        }
        else
            nst++;

        cout << endl;
    }

    return 0;
}