#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> beautifulIndices(string s, string a, string b, int k)
    {
        if (s.length() < a.length() || s.length() < b.length())
        {
            return {};
        }
        vector<int> idxA, idxB;
        for (int i = 0; i <= s.length() - a.length(); i++)
        {
            if (s.substr(i, a.length()) == a)
            {
                idxA.push_back(i);
            }
        }
        for (int i = 0; i <= s.length() - b.length(); i++)
        {
            if (s.substr(i, b.length()) == b)
            {
                idxB.push_back(i);
            }
        }
        vector<int> beautifulIdx;
        for (int i : idxA)
        {
            auto it = lower_bound(idxB.begin(), idxB.end(), i - k);
            if (it != idxB.end() && *it <= i + k)
            {
                beautifulIdx.push_back(i);
            }
        }
        return beautifulIdx;
    }
};
int main()
{
    Solution s;
    vector<int> ans = s.beautifulIndices("bavgoc", "ba", "c", 6);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}