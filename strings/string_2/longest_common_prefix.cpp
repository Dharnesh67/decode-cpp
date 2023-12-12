#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<string>s; // leet code 14
    
    s= { "flower","flo","flight"};
    int n = s.size();
    // if (n==1)
    // {
    //     return s[0];
    // }
    
    string last= s[ n-1];
    string first = s[0];
    sort(s.begin(),s.end());
    string str = "";

    for (int i = 0; i <first.size(); i++)
    {
        if (last[i]==first[i])
        {
          str+=first[i];
        }
        else break;
        
    }
    cout<<str;
    
    
    
}