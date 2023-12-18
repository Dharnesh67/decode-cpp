#include <bits/stdc++.h>
using namespace std;
int binary_to_decimal(string binary)
{
    int n = binary.length();
    int i = n - 1;
    int result = 0;
    while (i >= 0)
    {
        char ch = binary[i];
        if (ch == '1')
            result += (1 << (n - i - 1));
        i--;
    }
    return result;
}
string decimal_to_bin(int x)
{
    string ans = "";
    while (x > 0)
    {
        if (x % 2 == 0)
            ans = '0' + ans;
        else
            ans = '1' + ans;
        // x/=2;
        x = x >> 1;
    }
    return ans;
}
int main()
{
    cout << binary_to_decimal("1011") << endl;
    cout << decimal_to_bin(11) << endl;
    int x = 20 << 1;
    int y = 20 >> 1;
    cout << x << " " << y;

    return 0;
}