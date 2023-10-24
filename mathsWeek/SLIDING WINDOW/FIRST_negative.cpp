#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a, ans;
    a = {2, -3, 4, 4, -7, -1, 4, -2, 6};
    //    a = {2, 3, -2, 4, -7, -1, 4, -2, 6};
    int i = 1;
    int j = 3;   // window size
    int pn = -1; // previous negative
    for (int l = 0; l < j; l++)
    {
        if (a[l] < 0)
        {
            ans.push_back(a[l]);
            pn =l;
            break;
        }
    }
    while (j < a.size())
    {
        if (pn >= i)
            ans.push_back(a[pn]); // agar element same h to pushback kardo ya to wo next window me common h 
        else
        {
            for (int l = i; l < i+j; l++)
            {
                if (a[l] < 0)   // alag se search karlo or mile to break mardo
                {
                    ans.push_back(a[l]);
                    pn =l;
                    break; // break kyuki first dhoondh rhe h
                }
            }
        }
        i++;
        j++;
    }
    for (int l = 0; l <ans.size(); l++)
    {
        cout<<ans[l]<<" ";
    }

    return 0;
}