#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a = 1;
    for (int i = 1; i <= 2 * n - 1; i++) // 2*n-1 kyuki 4 dalne pe 7 print hona chahiya
    {
        cout << a;
        if (i >= n)
        {
            a--;
        }
        else
            a++;
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= n - i; k++)
        {
            cout << k;
            /* code */
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << " ";
            /* code */
        }
        for (int a = n - i; a >= 1; a--)
        {
            cout << a;
            /* code */
        }

        cout << endl;
    }

    return 0;
}