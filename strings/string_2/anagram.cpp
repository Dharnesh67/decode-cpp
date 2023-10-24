#include <iostream>
#include <algorithm>
using namespace std; // lleet 242
int main()
{
    // do string sort hone ke baad agar same h to wo anagram h
    int count = 0;
    string s, t;
    getline(cin, s);
    getline(cin, t);

    sort(s.begin(), s.end());

    sort(t.begin(), t.end());
    if (s==t)
    {
       cout<< "yes";

    }
    else cout<<"false";
    
}