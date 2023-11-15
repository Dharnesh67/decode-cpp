// SIMILAR TO THE PRIMS
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pp pair<int, int>

vector<list<pp>> grph;
void add_edge(int u, int v, int wt, bool bidir = true)
{
    grph[u].push_back({v, wt});
    if (bidir)
        grph[v].push_back({u, wt});
}

unordered_map<int, int> Djikstra(int src, int n)
{
    priority_queue<pp, vector<pp>, greater<pp>> pq;
    unordered_set<int> s; // visited
    vector<int> via(n + 1);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[i] = INT_MAX;
    }
    pq.push({0, src});
    mp[src] = 0;
    // int total_count = 0;
    // int result = 0;
    while (!pq.empty())
    {
        pp curr = pq.top();
        if (s.count(curr.second))
        {
            pq.pop();
            continue;
        }
        s.insert(curr.second);
        // total_count++;
        // result += curr.first;
        pq.pop();
        for (auto neighbour : grph[curr.second])
        {
            if (!s.count(neighbour.first) and mp[neighbour.first] > neighbour.second + mp[curr.second])
            {
                pq.push({neighbour.second + mp[curr.second], neighbour.first});
                via[neighbour.first] = curr.second;
                mp[neighbour.first] = neighbour.second + mp[curr.second];
            }
        }
    }
    return mp;
}
int main()
{

    int n, m;
    cin >> n >> m;
    grph.resize(n, list<pp>());
    while (m--)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        add_edge(u, v, wt, 1);
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