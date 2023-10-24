#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v = {1,2,3,4,5,6,7,7};
    int lo = 0, hi = v.size() - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (v[mid]==mid+1)
        {
            lo = mid +1;  // agar v[mid] ka index usse low h to uskke aage milega 
        }
        else if (v[mid]==mid)
        { 
              if (v[mid-1]==mid)
              {
                cout<<mid;
                break;
              }
              else{
                hi = mid-1;  // agar peeche ka element ssame nhi h to aage wala ans nhi hoga 
              }
              
        }
        
       
    }
}
