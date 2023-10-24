#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--) // if u write for(int j=1;j<=n+1-i;j++)  -> will give the same answer
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}