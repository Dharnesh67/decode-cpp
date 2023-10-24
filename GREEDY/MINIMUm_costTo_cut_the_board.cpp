#include <iostream>
#include <vector>
#include<algorithm> // chocolate  spoj --search on google
using namespace std;
#define ll long long int 
bool cmp(int x,int y){
    return x>y;
}
ll minimumcost(int n ,int m,vector<int>&vertical,vector<int>&horizontal){
sort(vertical.begin(),vertical.end(),cmp);
sort(horizontal.begin(),horizontal.end(),cmp);
int hz=1;
int vr=1;
int h =0;
int v=0;
int ans=0;
while(h<horizontal.size() and v<vertical.size()){
    if(vertical[v]>horizontal[h]){
        ans+=(vertical[v]*vr);
        v++;
        hz++;
    }
    else{
        ans+=(horizontal[h]*hz);
        h++;
        vr++;
    }
}
while (h<horizontal.size())
{
    ans+=(horizontal[h]*hz);
    h++;
    vr++;
  
}
while (v<vertical.size())
{
    ans+=(vertical[v]*vr);
    v++;
    hz++;
  
}
return ans;
}
int main()
{
    int n,m;
    m=6;
    n=4;
    vector<int>x,y;
    x={2,1,3,1,4};
    y={4,1,2};
    cout<<minimumcost(n,m,x,y);

    return 0;
}