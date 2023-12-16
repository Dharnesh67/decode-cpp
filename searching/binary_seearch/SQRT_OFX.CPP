#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int lo = 0, hi = x;
    while (lo <= hi)
    { int mid = (lo + hi) / 2;
        if (mid*mid == x)
        {
           cout<<mid;
           break;
        }
        else if(mid*mid>x)
        {
            hi = mid - 1;
        }
        else{
            lo =mid+1;
        }
    }

    return 0;
}
