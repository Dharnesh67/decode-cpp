#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
vector<int>dp; // dp based on n value

bool f(int k, int l, int n)
{
    dp[0] =0;
    dp[1]=1,dp[k]=1,dp[l]=1;
    // if(f(k,l,n-1) and f(k,l,n-k) and f(k,l,n-l)) return 0;
    // else  return 1;
 return !(f(k,l,n-1) and f(k,l,n-k) and f(k,l,n-l));
}
int main()
{
    int k;
    int l;
    cin >> k >> l;
    int n;
    cin >> n; // im writing this code for only one tower
    cout<<f( k, l, n-1);
    return 0;
}