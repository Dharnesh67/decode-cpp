#include <iostream>
#include <stack>
#include <algorithm>
using namespace std; //  also similar to post fix just traverse from last NO NEED TO CHECK THE PRIORITIES
int prio(char s)
{
    if (s == '+' or s == '-')
        return 1;
    else
        return 2;
}
int solve(int v1, int v2, char ch)
{
    if (ch == '+')
        return v1 + v2;
    if (ch == '-')
        return v1 - v2;
    if (ch == '*')
        return v1 * v2;
    if (ch == '/')
        return v1 / v2;
}
int main()
{
    string s = "-/*+79483"; // infix expression
   
    stack<int> val;
    for (int i = s.length()-1; i>=0 ; i--)
    {
        // check if s[i] is a digit;
        int ascii = int(s[i]);
        if (ascii >= 48 and ascii <= 57)
            val.push(ascii - 48); // ascii kitna aage h zero se
        else
        {
                    char ch = s[i];
                    int val1 = val.top();
                    val.pop();     // here the values of val1 and val2 are reverse from others
                    int val2 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
        }

    }
    
    cout << val.top();
}