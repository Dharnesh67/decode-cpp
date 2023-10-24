#include <iostream>
#include <vector>
using namespace std; // leet code 22
// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
void prin(int n, string ans, int o, int c, vector<string> &abc)
{
    // o == number of opening brackets ,c==number of closing brackets
    if (o == n && c == n)
    {
        abc.push_back(ans);
        return;
    }
    if (o != n)
    {
        prin(n, ans + '(', o + 1, c, abc); ////adding opening brackets
    }
    if (c < o)//agar closing bracket opening se kam  h tabhi closing bracket lagao  

    {
        prin(n, ans + ')', o, c + 1, abc); //
    }
}
int main()
{
    int n;
    cin >> n;
    vector<string> abc;
    prin(n, "", 0, 0, abc);
    for (int i = 0; i < abc.size(); i++)
    {
        cout << abc[i] << endl;
    }
}
