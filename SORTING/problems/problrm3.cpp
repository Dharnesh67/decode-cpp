#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v = {10, 2, 4, 5, 8, 3, 8};
    int k = *min_element(v.begin(), v.end());
    cout<<k<<"  ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}