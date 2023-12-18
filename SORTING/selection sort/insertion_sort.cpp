#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> v; 
    v = {5, 3,1,4,2};
    for(int i =1;i<v.size();i++){
        int j =i;
        while(j>0 and v[j]<v[j-1]){
            swap(v[j],v[j-1]);
            j--;
        }
    }
    for (int i = 0; i < v.size(); i++) { 
        cout<<v[i]<<" ";
    }
}