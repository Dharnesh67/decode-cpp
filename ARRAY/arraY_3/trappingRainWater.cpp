#include<iostream>
#include<vector>
using namespace std ;
    int trap(vector<int>&a) {
    int n = a.size();
    int pr[n]; // for previous greatest
    pr[0]=-1;
    int nxt[n];// next greatest
    // two arrays are generated 
int max = a[0];
for (int i = 1; i <n; i++)
    {
       // previous  greatest element 
       pr[i]=max;
       if (max < a[i])
       {
          max = a[i];
       }           
    }                                  // leet code 42
nxt[n-1]=-1;
max = a[n-1];
for (int i =n-2; i>=0; i--)
    {
       // previous  greatest
       nxt[i]=max;
       if (max<a[i])
       {
          max = a[i];
       }   
    }
int mini[n];
for(int i = 0;i<n;i++){
    mini[i]=min(pr[i],nxt[i]);
}
int water =0;
for(int i =0  ; i <n;i++){
if(a[i]<mini[i]){
    water +=(mini[i]-a[i]);
}

}

return water; }
int main(){



    
}


