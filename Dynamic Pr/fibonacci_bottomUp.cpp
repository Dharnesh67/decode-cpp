#include<iostream>
#include<vector>
using namespace std; // iterative dynamic programing
vector<int>Dp;
int f(int n ){
    Dp.clear();
    Dp.resize(n+1,-1);
    Dp[0]=0;
    Dp[1]=1;
    if(Dp[n]!=-1) return Dp[n];
    for (int i = 2; i <=n; i++)
    {
        if(Dp[i]!=-1) continue;
        Dp[i] =Dp[i-1]+Dp[i-2];
    }
    return  Dp[n];
}
int main(){
    int n ;
    cin>>n;
    cout<<f(n);
    return 0;
}