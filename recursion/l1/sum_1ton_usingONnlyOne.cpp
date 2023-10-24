#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
        return 0;
    // if (n == 1)
    //     return 1;          // base case rokne ke liye
    return n + sum(n - 1); // recursive call
}
int main()
{
    int n;
    cin >> n;
    cout << sum(n);
}