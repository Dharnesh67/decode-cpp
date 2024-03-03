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
    for (int i = 0; i <=x; i++)
    {
      cout << __builtin_popcount(i)<<" ";
    }
    
    return 0;
}