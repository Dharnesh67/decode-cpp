#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < n + 1 - i; k++)
        {
            cout << " ";
            /* code */
        }

        for (int j = 1; j <= i; j++) // also for(int j=1;j<=2*i-1;j++)
        {
            cout << j;
        }
        for (int l = i - 1; l >= 1; l--) // also for(int j=1;j<=2*i-1;j++)
        {
            cout << l;
        }

        cout << endl;
    }

    return 0;
}