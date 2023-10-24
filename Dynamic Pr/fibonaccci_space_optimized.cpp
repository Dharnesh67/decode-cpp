#include<iostream>
#include<vector>
using namespace std; // iterative dynamic programing
// vector<int>Dp;
int f(int n ){
   int a=0;
   int b=1;
   int c;
   if(n==0 or n==1) return n ;
   int i =2;
   while(i<=n){
    c=a+b;
    a=b;
    b=c;
    i++;
   }
   return c;
}
int main(){
    int n ;
    cin>>n;
    cout<<f(n);
    return 0;
}