#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int count = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s.size() == 1)
        {
            cout <<0;
            break;
        }
        if (s[i] != s[i + 1] && s[i] != s[i - 1])
        {
            count++;
        }
    }
    cout << count;
}