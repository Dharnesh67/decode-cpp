#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // for the spaces
        for (int k = n; k>i; k--)
        {
            cout << " ";
        }
        // for the stars 
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}