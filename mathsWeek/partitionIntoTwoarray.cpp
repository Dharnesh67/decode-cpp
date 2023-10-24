#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int >a,pre;
    a={1,4,5,3,2,7,8};
    pre ={a[0]};
    for (int i = 0; i <a.size()-1; i++)
    {
        pre.push_back(pre[i]+a[i+1]);  // prefix sum 
    }
    int b=0;
    for (int i = 0; i <pre.size(); i++)
    {
       if(2*pre[i]==pre[pre.size()-1]){  // maths--> refer copy
        cout<<"true";
        b=1;
        break;
       }
    }
    if(b==0) cout<<"false";
    return 0;
}