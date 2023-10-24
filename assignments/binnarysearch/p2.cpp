#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v = {0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1};
    int lo = 0, hi = v.size() - 1;
    int b=1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (v[mid] == 1)
        {
            if (v[mid -1] == 1)
            {
                hi = mid-1;
            }
            else
            {  b= mid;  // first occurence minus size gives number of ones present  
                break;
            }
        }
        else
        {
           lo =mid+1;
         }
    }
 cout<<v.size()-b;
}
