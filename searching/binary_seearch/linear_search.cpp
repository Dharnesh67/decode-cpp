#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v = {1, 2, 3, 4, 5, 15, 18, 21, 24};
    int target =12;  // lower bound
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]>target)
        {
            cout<<v[i-1];
            break;
        }
        
    }

    return 0;
}
