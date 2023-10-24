#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
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
    display();
   return 0;
}