#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n%i!=0) // bigo of n wala code
    //     {
    //       continue;
    //     }
    //     else
    //          cout<<i<<" ";

    // }

    // for (int i = 1; i <= sqrt(n); i++)  // randomized order
    // {
    //     if (n % i == 0) // bigo of sqrt n wala code
    //     {
    //         cout << i << " ";
    //         if (i == sqrt(n)) 
    //             continue; // for perfect squares
    //         cout << n / i << " ";
    //     }
    // }
    
    
     for (int i = 1; i <sqrt(n); i++) // for perfect root problem we will not include equal to sign 
    {
        if (n % i == 0) // bigo of  squrt n wala code
        {
            cout << i << " ";
        }
    }
     for (int i = sqrt(n); i >= 1; i--)
    {
        if (n % i == 0) // bigo of  squrt n wala code
        {
            cout <<n/i << " "; 
        }
    }
    return 0;
}
