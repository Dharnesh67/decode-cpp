#include <iostream>
#include <vector>
using namespace std;
// void prin(string a, string ans)
// {
//     char chr = a[0];
//     if (a == "")
//     {
//         cout << ans;
//         return;
//     }
//     if (chr != 'a')
//         prin(a.substr(1), ans + chr);
//     else
//         prin(a.substr(1), ans);
// }
void prin(string a,int i,string ans)
{   
    if (i==a.size())
    {
        cout << ans;
        return;
    }
    if (a[i]!= 'a') ans+=a[i];
  
    prin(a,i+1, ans);
}
int main()
{
    string a;
    getline(cin, a);
    prin(a,0, "");
}
