#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int find(vector<int>&parent,int x ){
    // this method returns which group/cluster x belongs to
    return parent[x]= (parent[x]==x) ? x: find(parent,parent[x]);  // by path compression
}
void Union(vector<int>&parent,vector<int>&rank ,int a,int b){
    a=find(parent,a);
    b=find(parent,b);
    if(rank[a]<=rank[b]){
        parent[a]=b;
        rank[b]++;
    }
    else if(rank[a]>rank[b]){
        parent[b]=a;
        rank[a]++;
    }
   //thats all for disjoint set union 
}
void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main(){
    file_i_o();
    int n,m;
    cin>>n>>m;
    // n== number of elements  m==no of queries
    vector<int>parent(n+1);
    vector<int >rank(n+1,0);
    for (int i = 0; i <n; i++)
    {
       parent[i]=i;

    }
    while (m--)
    {
        string s;
        cin>>s;
        if (s=="union")
        {
            int x,y;
            cin>>x>>y;
            Union(parent,rank,x,y);
        }
        else {
            int x,y;
            cin>>x>>y;
            x=find(parent,x);
            y=find(parent,y);
            if(x==y) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
    

return 0;
}
