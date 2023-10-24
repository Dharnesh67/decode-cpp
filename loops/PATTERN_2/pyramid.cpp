#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a= 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <n+1-i; k++)
        {
            cout<<" ";
            /* code */
        }
        for (int j = 1; j <=a; j++) // also for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
            
        }
        a+=2;
        cout << endl;
    }

    return 0;
}