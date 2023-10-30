#include <cmath>
#include <climits>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#define ll long long int
using namespace std;
int f(vector<ll>&arr){
   
    int n =arr.size();
    vector<int>visited(n,-1);
    ll i =0;
    int ans=INT_MIN;
    while(i<n){
        ll j=i+1;
        while(j<n){
            if(arr[i]>arr[j] and visited[j]<arr[i]) {
                arr[j]=arr[i];
                visited[j]=  arr[i];    }
            j++;
        }
        ans=max(ans,accumulate(arr.begin(),arr.end(),0));
        i++;
        }
    return ans;
    
}
int main() {
    int T;
    cin>>T;
    for(int  i =0;i<T;i++){
        ll n ;
        cin>>n;
        vector<ll>arr(n,-1);
        for(ll j=0;j<n;j++){
            ll x;
            cin>>x;
            arr[j]=x;
        }
        cout<<f(arr);
        // ll result=0;
        // for(ll k =0;k<arr.size();k++) result+=arr[k];
        // cout<<result<<endl;
    }
    return 0;
}
