#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <list>
using namespace std;
vector<list<int>> grp;
unordered_set<int>s;// visited
vector<vector<int>>result;
void add_edges(int src, int des, bool dir = true)
{
    grp[src].push_back(des);
    if (dir)
    {
        grp[des].push_back(src);
    }
}
void dfs(int curr,int end,vector<int>&path){
    if(curr==end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
         return ;}
    s.insert(curr);// marked visited
    path.push_back(curr);
    for (auto el : grp[curr])
    {
        if(s.count(el)) continue;
        cout<<el<<endl;
        dfs(el,end,path);
        
    }
    path.pop_back();
    s.erase(curr);
    return ;
}
void allpath(int u,int v){
    vector<int>path;
    dfs(u,v,path);
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
    cin>>x>>y;
    allpath(x,y);
    // cout<<anypath(x,y);
    return 0;
}