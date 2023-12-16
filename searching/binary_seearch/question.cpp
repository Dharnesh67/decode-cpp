// find first occcurence of x in sorted array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int low = 0, high = v.size() - 1;
    int target = 4;
    while (low <= high) // low<= high tak chalayenge
    {
        int mid = (low + high) / 2;
        if (v[mid] == target)
        { 
            if (v[mid-1]==target)
            {
                high =mid-1;  // check karo ke piche wala element bhi whi h kya
            }
            else{
                cout<<mid;
                break;
            }
            
        }
        else if (v[mid] < target)
        {
            low = mid + 1;
        }
        else /*(v[mid]>high)*/
        {
            high = mid - 1;
        }
    }

    return 0;
}
