#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
// dp based on n value // bottom up dp 
bool f(int k, int l, int n)
{
    vector<bool> dp(1000007, 0);
    dp[0] = 0;
    dp[1] = 1, dp[k] = 1, dp[l] = 1;
    for (int i = 2; i <= 1000007; i++)
    {
        if (i == k or i == l)
            continue;
        dp[i] = !(dp[i - 1] and ((i - k >= 1) ? dp[i - k] : 1) and ((i - l >= 1) ? dp[i - l] : 1));
    }
    return dp[n];
}
// vector<bool>dp; //  top down 
// bool f(int k,int l,int n){
//     if(n==k or n==l) return false;
//     if(n>=1 and f(k,l,n-1)) return dp[n]=true;
//     if(n>=k and f(k,l,n-k)) return dp[n]=true;
//     if(n>=l and f(k,l,n-l)) return dp[n]=true;
//     return dp[n]=flase;
// }
int main()
{
    int k;
    int l, m;
    cin >> k >> l>>m;
    // im writing this code for only one tower
    for(int i =1;i<=m;i++){
        int n;
        cin >> n;
        if (f(k, l, n))
        { // winning state;
            cout << 'A';
        }
        else
            cout << 'B';
    }
    return 0;
}