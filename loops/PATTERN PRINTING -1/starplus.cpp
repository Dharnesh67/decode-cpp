#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int midl = (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == midl || j == midl)
            {
                cout << "*";
            }

            else
                cout << " ";

            /* code */
        }

        cout << endl;
    }

    return 0;
}