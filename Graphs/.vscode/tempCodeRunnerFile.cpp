#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pp pair<int, int>
vector<list<pp>> graph;//node,weight
void add(int a, int b, int wt)
{
    graph[a].push_back({b, wt});
    graph[b].push_back({a, wt});
}
unordered_map<int, int> Djikstra(int src, int n)
{
    unordered_map<int, int> mp; // node,distance from src
    unordered_set<int> vis;
    priority_queue<pp, vector<pp>, greater<pp>> pq; // weight,node
    for (int i = 1; i <= n; i++)
    {
        mp[i] = INT_MAX;
    }
    pq.push({0, src});
    mp[src] = 0;
    while (!pq.empty())
    {
        auto curr = pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        pq.pop();
        for (auto neigh : graph[curr.second])
        {
            if(!vis.count(neigh.first) and mp[neigh.first]>neigh.second+mp[curr.second]){
                 mp[neigh.first]=neigh.second+mp[curr.second];
                 pq.push({neigh.second+mp[curr.second],neigh.first});
            }
        }
    }
    return mp;
}
int main()
{
    int n, m;
    cin >> n >> m;
    graph.resize(n, list<pp>());
    while (m--)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        add(u, v, wt);
    }
    int src;
    cin >> src;
    unordered_map<int, int> sp = Djikstra(src, n); // shortest path  map
    for (auto x : sp)
    {
        cout << x.first<<" "<< x.second << endl;
    }
    int dest;
    cin >> dest;
    cout <<"DISTANCE "<<sp[dest];
    return 0;
}

// give some example
// 5 6
// 1 2 2
// 1 3 4
// 2 3 1
// 2 4 7
// 3 5 3
// 4 5 1
// 1
// 5