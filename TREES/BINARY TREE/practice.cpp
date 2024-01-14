#include <bits/stdc++.h>
using namespace std;
// USING QUEUE
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};
class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector<int>idx;
        unordered_map<int,string>m;
        for (int i = 0; i <=s.length()-a.length(); i++)
        {
            if(s.substr(i,a.length())==a){
                idx.push_back(i);
            } 
        }
        for (int i = 0; i <=s.length()-b.length(); i++)
        {
            if(s.substr(i,b.length())==b){
                m[i]=b;
            } 
        }
        idx.erase(remove_if(idx.begin(), idx.end(), [&](int i) {
            for (auto x : m) {
                if (abs(x.first - i)<=k) {
                    return false;
                }
            }
            return true;
        }), idx.end());
        return idx;
    }
};
int main()
{
    
    Solution s;
    vector<int>ans=s.beautifulIndices("bavgoc","ba","c",6);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}