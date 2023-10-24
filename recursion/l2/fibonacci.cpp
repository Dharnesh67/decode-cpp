#include <iostream>
using namespace std;
int fibo(int n){
    if(n==1  || n==2) return 1;  // base case n=1 n=2 par value 1 hogi 
return  fibo(n-1)/*left call*/+fibo(n-2)/*right call*/;  // recursion  multiple call
}// ek baar me ek hi function call hogaa
int main()
{
    int n;
    cin >> n;
   for(int i = 1;i<=n;i++)  {
        cout<<fibo(i)<<" ";} 
    
}
