#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
#include<list>
using namespace std;
vector<list<int>> graph;
int v; // vertices
void add_edges(int src, int des, bool bi__direction = true)
{
    graph[src].push_back(des);
    if (bi__direction)
        graph[des].push_back(src);
}
void display()
{
    for (int i = 0; i <graph.size(); i++)
    {
        cout<<i<<"->";
        for (auto el : graph[i])
        {
            cout << el << ",";
        }
        cout << endl;
    }
}
bool dfs(int src,int parent,unordered_set<int>&vis){
    vis.insert(src);
    for (auto x: graph[src]) {  // x== neighbour
        if(vis.count(x) and x!=parent ){
            cout<<"CYCLE_DETECTED";
            return true;
        }
        if(!vis.count(x)){
            if(dfs(x,src,vis))
            return true;
        }
    }
    return false;
}
bool hascycle(){
    unordered_set<int>vis;
    bool result=false;
    for (int i = 0; i<= v; i++)
    {
        if(!vis.count(i)){
            result=dfs(i,-1,vis);
            if(result==true) return true;
        }
    }
    return false;
}
int main()
{
    cin >> v;
    graph.resize(v+1, list<int>());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edges(s, d);// iif we give a value false then it will tur 
    }
    display();
    bool b=hascycle();
    cout<<b;
   return 0;
}