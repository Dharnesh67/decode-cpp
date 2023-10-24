#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v = {0, 1,2, 3, 4, 5, 8, 9, 12};
    int lo=0,hi =v.size()-1;
    int ans;
    // for (int i = 0; i < v.size() - 1; i++)
    // {
    //     if (i != v[i]) ///O(n)
    //     {
    //         cout << i;
    //         break;
    //     }
    // }
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(mid==v[mid]){
            lo =mid +1; 
        }
        else{
            ans =mid;
            hi =mid-1;
        }
    }
    cout<<ans;

    return 0;
}
