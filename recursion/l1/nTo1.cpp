#include <iostream>
using namespace std;
int nTo(int n)
{
    if (n == 1)
        return 1; // base case rokne ke liye
    cout << n << " ";
    return nTo(n - 1);  // recursive call
}
int main()
{
    int n;
    cin >> n;
    cout << nTo(n);
}