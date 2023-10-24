#include <iostream>
#include <vector>
using namespace std;
void prin(string a,string ans,int i, vector<string>&abc,bool flag)
{   
    if (i==a.size())
    {
        abc.push_back(ans);
        return;
    }
     if (i==a.size()-1)
    {
      if(flag==true) prin(a, ans+a[i],i+1,abc,true ); // agar false hoga to uski left call chalegi hi nhi0
       prin(a,ans,i+1,abc,true); // not add 
       return;
    }
    if (a[i]==a[i+1])
    {
        if(flag==true)  prin(a, ans+a[i],i+1,abc,true); // add refer to copy0
          prin(a,ans,i+1,abc,false); // not add 

    }
    else{
         if(flag==true)  prin(a, ans+a[i],i+1,abc,true); // add refer to copy0
          prin(a,ans,i+1,abc,true); // not add 
    }
}
int main()
{
    string a;
    getline(cin, a);
    vector<string>abc;
    prin(a,"",0,abc,true);
    for (int i = 0; i<abc.size(); i++)
    {
        cout<<abc[i]<<" ";
    }
    
}
