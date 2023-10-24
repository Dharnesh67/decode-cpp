#include <iostream>
#include <vector> // printing elemets subset
using namespace std;
void prin(vector<int> &a,vector<int> &b, int i, vector<int>ans, vector<vector<int>>&v)
{
    if (i == a.size())
    {
        v.push_back(ans);
        return;
    }
    prin(a, b,i + 1, ans,v);
    ans.push_back(a[i]);
    for (int j = 0; j < b.size(); j++)
    {
        if (a[i] < b[j])
        {
            ans.push_back(b[j]);
            // prin(a, b, i + 1, ans, v);
            // ans.pop_back();
            break;
        }
    }
   prin(a,b, i + 1, ans,v);
}
int main()
{
    vector<vector<int>>v;
    v={};
    vector<int> a, b;
    a = {10, 15, 25};
    b = {1, 5, 20, 30};
    vector<int> ans;
    ans = {};
    prin(a, b, 0, ans,v);
    for (int i = 0; i <v.size(); i++)
    {
       for (int j = 0; j <v[i].size(); j++)
       {
           cout<<v[i][j]<<" ";
       }
       cout<<endl;
    }
    
}
