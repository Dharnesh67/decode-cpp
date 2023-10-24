#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <list>
using namespace std;
vector<list<int>> grp;
unordered_set<int>s;// visited
void add_edges(int src, int des, bool dir = true)
{
    grp[src].push_back(des);
    if (dir)
    {
        grp[des].push_back(src);
    }
}
bool dfs(int curr,int end){
    s.insert(curr);// marked visited
    for (auto el : grp[curr])
    {
        if(s.count(curr)) continue;
        return anypath(el, end);
    }
    return false;
}
bool anypath(int u, int v)
{
    return dfs(u,v);
}
void display()
{
    for (int i = 0; i < grp.size(); i++)
    {
        cout<<i<<"->";
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
    int x,y;
    cout<<anypath(x,y);
    return 0;
}