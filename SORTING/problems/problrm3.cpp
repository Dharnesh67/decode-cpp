#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v = {10, 2, 4, 5, 8, 3,-5677, 8};
    int k = *min_element(v.begin(), v.end());
    int l = *max_element(v.begin(), v.end());
    cout<<k<<"  "<<l<<" ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}