#include <bits/stdc++.h>

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
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << "->";
        for (auto el : graph[i])
        {
            cout << el << ",";
        }
        cout << endl;
    }
}
bool bfs(int src)
{
    unordered_set<int> vis;
    queue<int> q;
    vector<int> parent(v+1);
    q.push(src);
    vis.insert(src);
    while (!q.empty()){
        int node=q.front(); // current node
        q.pop();
        for (auto x :graph[node]) // x== neighbour
        {
            if(vis.count(x)  and parent[node]!=x){
                return true;
            }
            if(!vis.count(x)){
                vis.insert(x);
                parent[x]=node;
                q.push(x);
            }

        }
        return false;
    }
}
bool hascycle(){
    unordered_set<int>vis;
    bool result=false;
    for (int i = 0; i< v; i++)
    {
        if(!vis.count(i)){
            result=bfs(i);
            if(result==true) return true;
        }
    }
    return false;
}
int main()
{
    cin >> v;
    graph.resize(v + 1, list<int>());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edges(s, d); // iif we give a value false then it will tur
    }
    display();
    bool b = hascycle();
    cout << b;
    return 0;
}