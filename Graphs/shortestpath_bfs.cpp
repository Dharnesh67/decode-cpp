#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <queue>
#include <list>
using namespace std;
vector<list<int>> grp;
unordered_set<int>s;// visited
vector<vector<int>>result;
 int v;// vertices
void add_edges(int src, int des, bool dir = true)
{
    grp[src].push_back(des);
    if (dir)
    {
        grp[des].push_back(src);
    }
}
void bfs(int src,int des,vector<int>&dist){
   queue<int>q;
    s.clear();
    dist.clear();
    dist.resize(v,-1);
    dist[src]=0;
    s.insert(src);
    q.push(src);
    while(!q.empty()){
        int curr=q.front();
        cout<<curr<<" ";
        q.pop(); 
        for (auto x: grp[curr]) // x==neighbour
        {
            if(s.count(x)) continue;
            q.push(x);
            s.insert(x);
            dist[x]=dist[curr]+1;
        }

        
    }
    cout<<endl;
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
    // display();
    vector<int>v;
    int x,y;
    cin>>x;
    bfs(x,6,v);

    cout<<"distancde from zero of all the node>>"<<endl;
    for (int i = 0; i < v.size(); i++) { 
        cout<<v[i]<<" ";
    }
    // cout<<{anypath(x,y);
    return 0;
}