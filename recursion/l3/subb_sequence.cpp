#include <iostream>
#include <vector>
using namespace std;
void prin(vector<int> &a, int i, vector<int> ans,int k)
{
    if (i == a.size())
    {
       if(ans.size()==k) {for (int j = 0; j < ans.size(); j++)
        {
            cout << ans[j] <<" ";
        }
        cout<<endl;
        }
        
        return;
    }
    prin(a, i + 1, ans,k);
    ans.push_back(a[i]);
    prin(a, i + 1, ans,k);
}
int main()
{
int  k ;
cin>>k;
    vector<int> a;
    a = {1, 2, 3 , 4,5,6,8};
    vector<int> ans;
    ans = {};
    prin(a, 0, ans,k);
}
