#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
            /* code */
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << char(j+64);
            /* code */
        }

        cout << endl;
    }

    return 0;
}