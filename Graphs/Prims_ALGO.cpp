// create a pq  of pair<weight,curr>  and a unordered map
// insert pq pair of <-1,src> into the pq
// one by one remove the root elements of the pq
// if the root element is already visited ,then we will just continue
// we mark the weight of the pair into ans
// update the mapping
// go to every neighbour of the curr element,and only add those which are non visited and have lower weight proposition
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

ll prims(int src, int n)
{
    priority_queue<pp, vector<pp>, greater<pp>> pq;
    unordered_set<int> s; // visited
    vector<int> parent(n+1);
    unordered_map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        mp[i] = INT_MAX;
    }
    pq.push({0, src});
    mp[src] =0;
    int total_count = 0;
    int result = 0;
    while (total_count < n  and !pq.empty())
    {    pp curr = pq.top();
        if (s.count(curr.second))
        {
            pq.pop();
            continue;
        }
        s.insert(curr.second);
        total_count++;
        result += curr.first;
        pq.pop();
        for (auto neighbour : grph[curr.second])
        {
            if (!s.count(neighbour.first) and mp[neighbour.first] > neighbour.second)
            {
                pq.push({neighbour.second, neighbour.first});
                parent[neighbour.first] = curr.second;
                mp[neighbour.first] = neighbour.second;
            }
        }
    }
    return result;
}
// function prims(src, numberOfNodes):
//     priorityQueue pq
//     visitedSet visited
//     parentArray parent
//     distanceMap distance

//     for node in 1 to numberOfNodes:
//         distance[node] = INFINITY
//     distance[src] = 0

//     pq.push({0, src})
    
//     totalNodes = 0
//     totalCost = 0

//     while totalNodes < numberOfNodes and not pq.isEmpty():
//         currentNode = pq.pop()

//         if visited.contains(currentNode):
//             continue

//         visited.insert(currentNode)
//         totalNodes += 1
//         totalCost += currentNode.cost

//         for neighbor in graph[currentNode.node]:
//             if not visited.contains(neighbor.node) and distance[neighbor.node] > neighbor.cost:
//                 pq.push({neighbor.cost, neighbor.node})
//                 parent[neighbor.node] = currentNode.node
//                 distance[neighbor.node] = neighbor.cost

//     return totalCost

int main()
{

    int n, m;
    cin >> n >> m;
    grph.resize(n+1, list<pp>());
    while (m--)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        add_edge(u, v, wt, 1);
    }
    int src;
    cin >> src;

    cout <<"MINIMUM WEIGHT ==" <<prims(src, n);
    return 0;
}