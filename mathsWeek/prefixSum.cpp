#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int >a,pre;
    a={1,4,5,3,2,7,6};
    pre ={1};
    for (int i = 0; i <a.size()-1; i++)
    {
        pre.push_back(pre[i]+a[i+1]);
    }
    
    for (int i = 0; i <pre.size(); i++)
    {
       cout<<pre[i]<<" ";
    }

    return 0;
}