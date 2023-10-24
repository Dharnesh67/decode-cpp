#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int l = 1; l <= 2 * n - 1; l++)
    {
        cout << l;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j < n + 1 - i; j++)
        {
            cout << a;
            a++;
        }
        for (int k = 1; k <= 2 * i - 1; k++)

        {
            cout << " ";
        a++; // jitne space print ho rhe h utni baar a ko bada do
        }

        for (int j = 1; j < n + 1 - i; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }

    return 0;
}