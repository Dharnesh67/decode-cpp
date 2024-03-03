#include <bits/stdc++.h>
using namespace std;
vector<list<int>> grp;
unordered_set<int> s; // visited set
vector<string>result;
void add_edges(int src, int des, bool dir = true)
{
    grp[src].push_back(des);
    if (dir)
    {
        grp[des].push_back(src);
    }
}
string dfs(int curr, int end, string ans)
{
    if (curr == end)
    {
        result.push_back(ans);
        return ans;
    }
    s.insert(curr); // marked visited
    for (auto el : grp[curr])
    {
        if (s.count(el))
            continue;
        dfs(el, end, ans+"-" + to_string(el));
    }
    s.erase(curr);
    return ans;
}
string anypath(int u, int v)
{
    string ans =to_string(u);
    return dfs(u, v, ans);
}
void display()
{
    for (int i = 0; i < grp.size(); i++)
    {
        cout << i << "->";
        for (auto el : grp[i])
        {
            cout << el << ",";
        }
        cout << endl;
    }
}
int main()
{
    int v;
    cin >> v;
    grp.resize(v, list<int>());
    int e;
    cin >> e;
    s.clear();
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edges(s, d); // iif we give a value false then it will tur
    }
    display();
    int x, y;
    cin >> x >> y;
    // allpath(x,y);
    cout << anypath(x, y);
    for (int i = 0; i <result.size(); i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}