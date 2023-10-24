#include <iostream>
using namespace std;
int nTo(int n,int i)
{
    if (i == n)
        return n; // base case rokne ke liye
    cout << i<< " ";
    
    return nTo(n,i+1);  // recursive call //i++;
}
int main()
{
    int n;
    cin >> n;
    cout << nTo(n,1);
}