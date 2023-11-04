#include<iostream>
#include<vector>
#include<unordered_set>
#include<list>
using namespace std;
class Solution {
public:
    int v;
    vector<list<int>> graph;
    unordered_set<int> visited;
    vector<int>ans;
    void add_edges(int a, int b)
    {
        graph[a].push_back(b);
    }
    void TopoBfs()
    {
    // Kahn's Algorithmn
    vector<int> indegree(v, 0);
    for (int i = 0; i < v; i++)
    {
        for (auto neighbour : graph[i])
        { /* i--> neighbour*/
            indegree[neighbour]++;
        }
    }
    queue<int> q;
    // unordered_set<int> visited;
    for (int i = 0; i < v; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
            visited.insert(i);
        }
    }
    while (!q.empty())
    {
        int node = q.front();
        ans.push_back(node);
        q.pop();
        for (auto neighbour : graph[node])
        {
            if (!visited.count(neighbour))
            {
                indegree[neighbour]--;
                if (indegree[neighbour] == 0)
                {
                    q.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
    }
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        v = numCourses;
        int x=0;
        graph.resize(v,list<int>());
        visited.clear();
        while(x<prerequisites.size()){
            int a=prerequisites[x][1];
            int b=prerequisites[x][0];
            add_edges(a,b);
            x++;
        }
        TopoBfs();
        if(ans.size()<v) return false;
        return true;}
};
int main(){


return 0;
}