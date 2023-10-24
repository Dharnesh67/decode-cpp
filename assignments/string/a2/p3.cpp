#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string a;       // vowel substring 
    getline(cin, a);
    int n = a.length();
    int l = 0, answ = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            l++;
        }
        else
        {
            answ += (l * (l + 1)) / 2;
            l = 0;
        }
    }
     answ+=(l*(l+1))/2;
    cout<<answ;
}