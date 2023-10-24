#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
vector<int> dp;
int f(vector<int>&v, int n)
{
    if (n == 0) return 0;
    if (dp[n] != -2) return dp[n];
    int res = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        if(n-v[i]<0) continue;
        res = min(res, f(v, n - v[i]));
    }
    if(res == INT_MAX) return dp[n] =res; // if res is not calculated
    return dp[n] = 1 + res;
}
int main()
{
    int n, x;
    cin >> n >> x;
    dp.clear();
    dp.resize(1000006, -2);
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    int ans=f(v, x);
    if(ans==INT_MAX) cout<<-1;
    else cout<< ans;
    return 0;
}