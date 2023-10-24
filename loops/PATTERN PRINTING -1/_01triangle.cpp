#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) // 1:12
            a = 0;
        else
            a = 1;

        for (int j = 1; j <= i; j++)
        {
            cout << a;
            //  if (i==j|| i-j==2)
            // {
            //    cout<<1;

            // }
            // else cout<<0; we can also do this problem by this method 




   // this is called the flipping of number
            if (a == 1)
                a = 0;
            else
                a = 1;
        }
        cout << endl;
    }

    return 0;
}