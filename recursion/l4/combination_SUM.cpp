#include <iostream> // combination sum
#include <vector>   // leet 39
using namespace std;
void combinationsum(vector<int> &v, vector<int> ans, int target, int i) //
{
    if (target == 0)
    {
        cout<<"{";
        for (int j = 0; j < ans.size(); j++)
        {
            cout << ans[j];
        }
        cout <<"} ";
        return;
    }
    if (target < 0)
        return;
    for (int k = i; k < v.size(); k++)
    {
            ans.push_back(v[k]);
            combinationsum(v, ans, target - v[k],k);
            ans.pop_back();
        }
}
int main()
{
    vector<int> v;
    v = {2, 3, 5, 7};
    int target = 8;
    vector<int> ans;
    ans = {};
    combinationsum(v, ans, target, 0);
}
