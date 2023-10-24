#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<unordered_map<int,int>> graph; // dest ,weight
int v; // vertices
void add_edges(int src, int des,int wt, bool bi__direction = true)
{
    graph[src][des]=wt;
    if (bi__direction)
        graph[des][src]=wt;
}
void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << "->";
        for (auto el : graph[i])
        {
            cout<<"("<<el.first<< ","<< el.second <<")";
        }
        cout << endl;
    }
}
int main()
{
    cin >> v;
    graph.resize(v, unordered_map<int,int>());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d,w;
        cin >> s >> d>>w;
        add_edges(s, d,w); // iif we give a value false then it will turn to directrd graph
    }
    display();
// 5
// 7
// 0 1 2
// 0 3 1
// 1 2 3
// 1 3 2
// 2 4 4
// 3 4 3
// 4 0 5 //standard input

    return 0;
}