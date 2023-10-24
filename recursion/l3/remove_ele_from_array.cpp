#include <iostream>
#include <vector>
using namespace std;
void prin(int a[],int i,vector<int>&ans)
{   
    if (i==7)
    {   
        for(int k =0;k<4;k++){
            cout<<ans[k];
        }
        return;
    }
    if (a[i]!=1) ans.push_back(a[i]);
    prin(a,i+1, ans);
}
int main()
{
    int a[] = {1,2,3,1,1,4,7,1};
    vector<int>ans;
    ans={};
    prin(a,0,ans);
}
