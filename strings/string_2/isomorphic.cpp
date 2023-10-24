#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() // leet 205
{
    string s;
    string t;
    cin >> s >> t;
    if (s.size() != t.size())
        cout << false;
    vector<int> a(150, 10);
    for (int i = 0; i < s.size(); i++) // from first perspective means s ke perspective se hi check hua abhi tak 
    {
        int ascii = int(s[i]); // is ascii value par
        if (a[ascii] == 10)
        {

            a[ascii] = s[i] - t[i];
            
        }
        else if (a[ascii]!=s[i] - t[i]) cout<<false;
    }
    // ab hm t ke perspective se bhi dekhenge 
    for (int i = 0; i <150 /* phir se vector  ko 10 bana do */; i++)
    {
        a[i]=10;
    }
    for (int i = 0; i < s.size(); i++) // from t ke perspective se hi check hua abhi tak 
    {
        int ascii = int(t[i]); // is  t ascii value par
        if (a[ascii] == 10)
        {

            a[ascii] = s[i] - t[i];
            
        }
        else if (a[ascii]!=s[i] - t[i]) cout<<false;
    }
    
    cout<<true;
}