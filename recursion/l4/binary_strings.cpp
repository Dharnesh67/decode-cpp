#include <iostream>
#include <vector> // binary strings of length n without consequetive 1
using namespace std;
void binary(int k, string s) //
{
    if (k == 0)
    {
        cout << s << endl;
        return;
    }
     binary(k - 1, s + "0");
    if(s=="") binary(k - 1, s + "1");
    else if(s[s.length()-1]=='0' /*charactersingle quote*/)binary(k - 1, s + "1");
}
int main()
{
    int k;
    cin >> k;
    binary(k, "");
}
