#include <iostream>
using namespace std;
int main()
{
    string a;   // changing string to int without inbuilt function
    getline(cin, a);
    int ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        ans *= 10;       //   ascii of number minus ascii of 0
        ans += (int(a[i]) - 48);
    }

    cout << ans;
}