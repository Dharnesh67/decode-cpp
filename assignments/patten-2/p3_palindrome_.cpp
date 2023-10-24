#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <=n-i; k++)
        {
            cout<<" ";
            /* code */
        }
        
        for (int j = i; j >= 1; j--)
        {

            cout << char(j+64);
        }
        for (int l =1;l<i; l++)
        {
            cout<<char(l+65);
        }
        




        cout << endl;
    }

    return 0;
}