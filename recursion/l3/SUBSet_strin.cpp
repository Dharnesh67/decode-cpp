#include <iostream>
#include <vector>
using namespace std;
void prin(string a,string ans,int i, vector<string>&abc)
{   
    if (i==a.size())
    {
        abc.push_back(ans);
        return;
    }
       prin(a, ans+a[i],i+1,abc); // add refer to copy0
       prin(a,ans,i+1,abc); // not add 
}
int main()
{
    string a;
    getline(cin, a);
    vector<string>abc;
    prin(a,"",0,abc);
    for (int i = 0; i<abc.size(); i++)
    {
        cout<<abc[i]<<" ";
    }
    
}
