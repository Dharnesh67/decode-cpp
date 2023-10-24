#include <iostream>
using namespace std;
int hcf(int a, int b)
{
    int l = 1; // ulta loop chalana jada efficient hoga
    for (int i = min(a,b);i>=1;i--)
    {
        if (a % i == 0 && b % i == 0) // i is a common factor
        {
            l = i;
            break; // ulte loop me phli baar me hi hcf milta h 
        }
    }
   return l;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << hcf(x, y);

    return 0;
}