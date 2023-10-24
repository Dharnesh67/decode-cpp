#include <iostream>
using namespace std;
int sum(int n,int i)  // i represents sum
{ // after call recursion
    if (n ==0)
        return i; // base case rokne ke liye
    // i+=n;
    return sum(n-1,i+n);   // recursive call 
}
int main()
{
    int n;
    cin >> n;
    cout<<sum(n,0);
}