#include<iostream>
#include<vector>
using namespace std;
vector<int>Dp;
int f(int n ){
    if(n==0 or n==1) return n;
    if(Dp[n]!=-1) return Dp[n]; // dp check to identify if problemwas solved earlier or not
    return Dp[n]=f(n-1)+f(n-2); // storing ans
}
int main(){
    int n ;
    cin>>n;
    Dp.clear();
    Dp.resize(n+1,-1);
    cout<<f(n);
    return 0;
}