#include <iostream>
using namespace std;
void nTo(int n)
{ // after call recursion
    if (n ==0)
        return; // base case rokne ke liye
     nTo(n - 1);  // recursive call
     cout << n << " ";   // print after call 
}
int main()
{
    int n;
    cin >> n;
     nTo(n);
}