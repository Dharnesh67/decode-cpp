// leet code 33
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; // rotated array
int main()
{
    vector<int> arr;
    arr = {4,5,6,7,0,1,2};
    int target;
    cin >> target;
    int lo = 0, hi = arr.size() - 1;
    int pivot = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2; // finding pivot
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            pivot = mid + 1;
            break;
        }
        else if (arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1])
        {
            pivot = mid;
            break; // this code is only for finding pivot
                   // after finding pivot we will search
        }
        else if (arr[mid] > arr[hi])
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    // for search
    if (arr[0] <= target && arr[pivot - 1] >= target)
    {
        lo = 0;
        hi = pivot - 1;
        while (lo <= hi)
        {
            int mid = lo +(hi -lo)/2;
            if (arr[mid]==target) {cout<<mid;break;}
            else if(arr[mid]>target) hi = mid-1;
            else lo = mid+1;
        }
    }
    else{
        lo = pivot;
        hi = arr.size()-1;
        while (lo <= hi)
        {
            int mid = lo +(hi -lo)/2;
            if (arr[mid]==target) {cout<<mid; break;}
            else if(arr[mid]>target) hi = mid-1;
            else lo = mid+1;
        }
    }

    return 0;
}