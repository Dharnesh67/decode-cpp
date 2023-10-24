#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#define ll long long int
#define mod 1000000007
using namespace std;
// vector<int>v={1,2,3,4,5,6};
vector<ll>dp(1000006,-1);
int f(int n ){
    if(dp[n]!=-1) return dp[n];
   if(n==0) return 1;
   int ans=0;
   for (int i = 1; i <=6; i++) { 
    if(n-i<0) break;
       ans=(ans%mod+f(n-i)%mod)%mod;
   }
   return dp[n] = (ans)%mod;
}
int fbottomup(int n){
    dp[0]=1; // bottom up
    for (int k = 1; k <=n; k++) { 
        int ans=0;
        for (int i = 1; i <=6; i++) { 
            if(k-i<0) break;
            ans=(ans%mod+dp[k-i]%mod)%mod;
        }
        dp[k]=ans%mod;
    }
    return dp[n];
}
int main(){
int n;
cin>>n;
cout<<f(n);
// cout<<fbottomup(n);
return 0;
}