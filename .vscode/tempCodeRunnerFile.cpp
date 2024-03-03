#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n ;
        cin>>n;
        vector<int>v(n);
        for(int j =0;j<n;j++){
            int x;
            cin>>x;
            v[i]=x;
        }
        int ans=INT_MAX;
        for(int j =0;j<n;j++){
            ans=min(ans,v[j]);
        }
        cout<<ans<<" ";
        if(ans>4) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
