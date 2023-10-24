#include <iostream>
#include <vector>  // subarray should be continous
using namespace std;
void subset(vector<int>&v,int i,vector<int>ans) 
{ 
   if (i==v.size())
   {
    for (int j = 0; j<ans.size(); j++)
    {
        cout<<ans[j]<<" ";
    }
    cout<<endl;
    return;
   }
   subset(v,i+1,ans);
   ans.push_back(v[i]);
   subset(v,i+1,ans);
   
}
int main()
{
   vector<int>v;
   v={1,2,3};
   vector<int>ans;
   ans={};
   subset(v,0,ans);
}
