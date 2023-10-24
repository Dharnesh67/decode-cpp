#include <iostream>   //either one step or two step or their combination
using namespace std;
int stair(int n)
{   if(n==1) return 1;
    if (n == 2) return 2; // base case n=1 and n=2
    return stair(n - 1) + stair(n - 2);// combination of two problems
}
int main()
{
    int n;
    cin >> n;
    cout << stair(n);
}
