#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
int  main (){
vector<vector<int>>v;
v= {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
int n = v.size();
int t;
cin>>t;
int b=0;
for(int i =0; i <n;i++){
    if(v[i][n-1]<t) continue;
    int lo =0;
    int hi = v[i].size()-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(v[i][mid]==t){
        b=1;
        break;
        }
        else if(v[i][mid]>t) hi =mid-1;
        else lo= mid+1;
}
}
if (b==0)
{
   cout<<"false";
}
else cout<<"true";

return 0;
}