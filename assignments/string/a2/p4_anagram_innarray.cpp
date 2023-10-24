#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    bool flag = true;
    vector<string> s;
    s = {"book","ookb","koob"};
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        sort(s[i].begin(), s[i].end());
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j<n; j++)
        {
            if (s[i]!=s[j])
            {
                flag = false;
                break;
            }
            
            
        }
        
        
    }

    cout<<flag;

}