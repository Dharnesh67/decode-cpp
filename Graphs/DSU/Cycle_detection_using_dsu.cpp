#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int find(vector<int>&parent,int x ){
    // this method returns which group/cluster x belongs to
    return parent[x]= (parent[x]==x) ? x: find(parent,parent[x]);  // by path compression
}
bool Union(vector<int>&parent,vector<int>&rank ,int a,int b){
    a=find(parent,a);
    b=find(parent,b);
    if(a==b) {
        return true; 
    }
    if(rank[a]<rank[b]){
        parent[a]=b;
        rank[b]++;
    }
    else if(rank[a]>=rank[b]){
        parent[b]=a;
        rank[a]++;
    }
    return false;
   //thats all for disjoint set union 
}
int main(){
    int n,m;
    cin>>n>>m;
    // n== number of elements  m==no of queries
    vector<int>parent(n+1);
    vector<int >rank(n+1,0);
    for (int i = 0; i <=n; i++)
    {
       parent[i]=i;

    }
    while (m--)
    {
            int x,y;
            cin>>x>>y;
            bool b=Union(parent,rank,x,y);
            if(b==1){
                cout<<"CYCLE DETECTED";
                 break;
            }
    }
    

return 0;
}
