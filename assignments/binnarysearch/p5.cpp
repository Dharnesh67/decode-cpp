#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x,  b = 0;
    cin >> x;
    int lo = 0, hi = x;

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (mid*mid==x)
        {
            b=1;
            break;
        }
        else if (mid*mid<x)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    if (b == 0)
    {
        cout <<"NO";
    }
    else if (b==1)
    {
       cout<<"YES";
    }
    

    return 0;
}
