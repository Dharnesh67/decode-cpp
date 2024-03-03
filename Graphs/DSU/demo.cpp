#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> par;
    int find(int a)
    {
        return par[a] = (par[a] == a) ? a : find(par[a]);
    }
    void Union(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (a == b)
            return;
        par[b] = a;
    }
    long long countPairs(int n, vector<vector<int>> &edges)
    {
        par.resize(n, -1);
        for (int i = 0; i < n; i++)
        {
            par[i] = i;
        }
        for (int i = 0; i < edges.size(); i++)
        {
            Union(edges[i][0], edges[i][1]);
        }
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[par[i]]++;
        }
        long long ans = 0;
        for (auto x : m)
        {
            int num = x.first;
            int sum=0;
            for (auto a : m)
            {
               if(a.first==num) continue;
               sum+=a.second;
            }
            ans+=sum;
        }
        return ans;
    }
};
int main()
{
}