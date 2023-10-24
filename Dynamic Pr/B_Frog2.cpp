#include<iostream>
#include<vector>
#include<climits>
using namespace std; // iterative dynamic programing
vector<int>h; //heights
int k;
vector<int>dp;
int f(int i ){
    if(i>=h.size()){ 
        return INT_MAX;
    }
    if(i==h.size()-1) return 0; // last stone
    int ans=INT_MAX;
    if(dp[i]!=-1) return dp[i];
    for (int  j = 1; j<=k; j++)
    {
        if(i+j>=h.size()) break;
        ans=min(ans,abs((h[i]-h[i+j]))+f(i+j));
    }
    return dp[i]=ans;
}
int main(){
    int n;
    cin>>n>>k;
    h.resize(n);
    dp.resize(n,-1);
    for (int i = 0; i < n; i++) cin>>h[i];
    cout<<f(0);
    return 0;
}