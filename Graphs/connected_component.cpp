#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <unordered_set>
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
        cout<<i<<"->";
        for (auto el : graph[i])
        {
            cout << el << ",";
        }
        cout << endl;
    }
}
void dfs(int node,unordered_set<int>&visited){
    visited.insert(node);
    for(auto neighbor:graph[node]){
        if(visited.count(neighbor)) continue;
        dfs(neighbor,visited);
    }
}
int connected_component(){
    int count=0;
    unordered_set<int>visited;
    for (int i = 0; i < v; i++) {  //O(v+e)
        // go to every vertex
        //if from a vertex we can initialize a dfs ,we got one more connected component
        if(visited.count(i)==0) {
            count++;
            dfs(i,visited);
        }
    }
    return count;
}
int main()
{
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edges(s, d);// iif we give a value false then it will tur 
    }
    // display();
    cout<<connected_component();
   return 0;
}