#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v = {1, 2, 3, 3,3,3,3, 4, 4, 4, 5};
    int lo = 0, hi = v.size() - 1;
    int x,b=0;   // last occurence of x
    cin >> x;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (v[mid] == x)
        {
            if (v[mid + 1] == x)
            {
                lo = mid + 1;
            }
            else
            {
              cout << mid;
              b=1;
              break;
            }
        }
        else if (v[mid]<x)
        {
            lo = mid+1;
        }
        else {
            hi = mid-1;
        }
         
    }
   if (b==0)
   {
    cout<<-1;
   }
   
    return 0;
}
