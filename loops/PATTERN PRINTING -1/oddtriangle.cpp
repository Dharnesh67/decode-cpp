#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = 1; // new variable
        for (int j = 1; j <= i; j++)  // same thing we can do by 
        //  for(int j =1 ;j<=2*i-1;j+=2)
        {

            cout << a;
            a += 2;
        }
        cout << endl;
    }

    return 0;
}