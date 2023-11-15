#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
int find(vector<int> &parent, int a)
{
    return parent[a] = ((parent[a] == a) ? a : find(parent, parent[a]));
}
void Union(vector<int>&parent,vector<int> &rank,int a,int b){
    a=find(parent,a);
    b=find(parent,b);
    if(a==b) return;
    if(rank[a]>=rank[b]){
        rank[a]++;
        parent[b]=a;
    }
    else if(rank[a]<rank[b]){
        rank[b]++;
        parent[a]=b;
    }
}
struct edge{
    int src;
    int des;
    int weight;
};

bool cmp(edge e1,edge e2) {   // for sorting based on edges
    return (e1.weight<e2.weight);
}

ll kruskals(vector<edge> &input,int n,int e){ // number of vertices and edges
      sort(input.begin(),input.end(),cmp);
      vector<int>parent(n+1);
      vector<int>rank(n+1,1);
        for (int i = 0; i <=n; i++) { 
            parent[i]=i;
        }
        int edgecount=0;// ek tree me n-1 edges hoti h agar graph me n verctices h to 
        int i =0;
        ll ans=0;
        while (edgecount<n-1 and i<input.size()){
            edge curr =input[i];  // sorted so we will get the minimum wt edge
            int srcpar=find(parent,curr.src);
            int despar=find(parent,curr.des);
            if(srcpar!=despar){  // add edge this will not make cycle 
                Union(parent,rank,srcpar,despar);
                ans+=curr.weight;
                edgecount++;
            }
            i++;// jump to next edge  whether you picked or not the last edge
        }  


        return ans;    
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<edge>v(e);
    for (int i = 0; i < e; i++) { 
        cin>>v[i].src>>v[i].des>>v[i].weight;
    }
    cout<<kruskals(v,n,e);
    return 0;
}