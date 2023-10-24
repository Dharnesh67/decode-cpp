#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
vector<int> dp;
int mini(int x){
    int m = INT_MIN;
    while (x != 0)
    {
        if (x % 10 > m)
            m = x % 10;
        x /= 10;
    }
    return m;
}
int f(int n)
{
    if(n==0) return 0;
    if (n <=9 ) return 1;
    if (dp[n] != -1) return dp[n];
    int x = mini(n);
    return dp[n] = 1 + f(n - x);
}
int fBottomup(int n){
    dp[0]=0;
    for (int i = 1; i <=9; i++)  dp[i] =1;
    if (dp[n] != -1) return dp[n];
   for (int i = 10; i <=n; i++) { 
       dp[i]=1+dp[i-mini(i)];
   }
    return dp[n];
}
int main()
{

    int n;
    cin >> n;
    dp.clear();
    dp.resize(n + 4, -1);
    cout << fBottomup(n);
    return 0;
}