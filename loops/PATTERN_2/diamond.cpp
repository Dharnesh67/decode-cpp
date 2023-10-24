#include <iostream>
using namespace std;
int main()
{
    // nst is number of stars , nsp is number of spaces,
    int n;
    cin >> n;
    int nsp = n - 1, nst = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";

            /* code */
        }
        if (i >= n)
        {
            nsp++;
            /* code */
        }
        else
            nsp--;
        for (int k = 1; k <= nst; k++)
        {
            cout << "*";
            /* code */
        }
        if (i >= n)
        {
            nst -= 2;
            /* code */
        }
        else
            nst += 2;

        cout << endl;
    }
    return 0;
}