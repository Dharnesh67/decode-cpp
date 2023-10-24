#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
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
    string s = "(7+9)*4/8-3"; // infix expression
    // we need two stacks ,1 for val and one for operator
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < s.length(); i++)
    {
        // check if s[i] is a digit;
        int ascii = int(s[i]);
        if (ascii >= 48 and ascii <= 57)
            val.push(ascii - 48); // ascii kitna aage h zero se
        else
        {
            if (op.empty())
                op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else  if(op.top()=='(') op.push(s[i]); 
             else if(s[i]==')'){
                while (op.top()!='(')
                { //work
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop(); // opening bracket ko uda diya 
                
            }
            else if (prio(s[i]) > prio(op.top()))
                op.push(s[i]);
          
            else
            { // priority prio(s[i])<=prio(op.top()) then do the work
                while (op.size() > 0 and prio(s[i]) <= prio(op.top()))
                {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // there is still a chance  that operator stack can still have values
    // so make it empty
    while (!op.empty())
    {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }

    cout << val.top();
}