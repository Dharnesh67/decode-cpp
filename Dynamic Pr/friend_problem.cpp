#include<iostream>
#include<vector>
using namespace std;
vector<int>Dp;
int f(int n ){
    if(n==1 or n==2) return n;
    if(Dp[n]!=-1) return Dp[n]; // dp check to identify if problemwas solved earlier or not
    return Dp[n]=(n-1)+(n-1)*f(n-2); // storing ans
}
int main(){
    int n ;
    cin>>n;
    Dp.clear();
    Dp.resize(n+1,-1);
    cout<<f(n);
    for (int i = 0; i <Dp.size(); i++)
    {
       cout<<Dp[i];
    }
    
    return 0;
}