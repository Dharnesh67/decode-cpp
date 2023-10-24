#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int T ;
    cin>>T;
    for(int t=0;t<T;t++){
        int n;
        cin>>n;
        int k;
        cin>>k;
        int m;
        cin>>m;
        for(int i =0;i<m;i++){
            vector<int>a;
            int j=n;
            while(j>0){
                int x=j%10;
                a.push_back(x*k);
                j/=10;
            }
            string s="";
            for(int l=0;l<a.size();l++){
                s+=to_string(a[l]);
            }
            
           n=stoi(s); 
        }    
        string ans=to_string(n);
        cout<<ans.length()<<endl;
    }
    return 0;
}
