#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
vector<int>Dp;
// int fTopDown(int n)
// {
//     if (n == 1)
//         return 0;
//     if (n == 2 or n == 3)
//         return 1;
//     if (Dp[n] != -1)
//         return Dp[n];                                                                                     // dp check to identify if problemwas solved earlier or not
//     return Dp[n] = 1+min({f(n - 1), (n % 2 == 0) ? f(n / 2) : INT_MAX, (n % 3 == 0) ? f(n / 3) : INT_MAX}); // storing ans
// }
int fbottomup(int n)
{   Dp.clear();
    Dp.resize(n+1, -1);
    Dp[1]=0;
    Dp[2]=1;
    Dp[3]=1;
    for(int i=4;i<=n;i++ ){
         Dp[i] = 1+min({Dp[i-1], (i % 2 == 0) ? Dp[i/2] : INT_MAX, (i % 3 == 0) ?  Dp[i/3]: INT_MAX});
    }
    return Dp[n];
}
int main()
{
    int n;
    cin >> n;
    // cout << fTopDown(n);
    cout<<fbottomup(n);
    return 0;
}