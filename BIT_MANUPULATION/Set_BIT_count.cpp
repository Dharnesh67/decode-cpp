#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
// setBot == number of ones in binary representation
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout << __builtin_popcount(x);
    return 0;
}