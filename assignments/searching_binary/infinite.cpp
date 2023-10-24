#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
int  main (){
vector<int>v;
v= {9,8,7,6,5,4,3,2,1};
int t;
cin>>t;
int lo =0;
int hi = v.size()-1;
while(lo<=hi){
    int mid = lo+(hi-lo)/2;
    if(v[mid]==t){
       cout<<mid;
       break;
    }
    else if(v[mid]<t) hi =mid-1;
    else lo= mid+1;
}
return -1;
}