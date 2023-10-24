#include <iostream>
#include <vector> // subarray should be continous
using namespace std; // only for unnique elments
void subset(vector<int> &v, int i, vector<int> ans)
{
    if (i == v.size())
    {
        for (int j = 0; j < ans.size(); j++)
        {
            cout << ans[j] << " ";
        }
        cout << endl;
        return;
    }
    subset(v, i + 1, ans); // one call without storing
    if (ans.size() == 0)
    {
        ans.push_back(v[i]);
        subset(v, i + 1, ans); // one call for storing
    }
    else if (ans[ans.size() - 1] == v[i - 1])
    { // ye call tabhi lagega jab ans ka size() zero nhi hoga
        ans.push_back(v[i]);
        subset(v, i + 1, ans);
    }
}
int main()
{
    vector<int> v;
    v = {1, 2, 3,4};
    vector<int> ans;
    ans = {};
    subset(v, 0, ans);
}
