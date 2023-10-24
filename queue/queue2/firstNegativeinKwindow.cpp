#include <iostream>
#include <queue>
#include<vector>
using namespace std;
int main()
{   int k =3; // window  size
    vector<int>v;
        vector<int>ans;

    v={0,-1,-2,3,4,-5,6,4,7,-8};
    queue<int>q;
    for (int i = 0; i < v.size(); i++)
    {
      if(v[i]<0)  q.push(i);
    }
    int i =0;
    int j=k;
    while(j<v.size()){
        if(!q.empty() and q.front()<i) q.pop();
        if( q.empty() and q.front()>=j) {
            continue;
        }
        else ans.push_back(v[q.front()]); 
        i++;
        j++;
    }
    for (int i = 0; i <ans.size(); i++)
    {
        cout<<ans[i]<<" ";

    }
    

    
}