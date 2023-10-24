#include <iostream>
#include <stack>
#include <algorithm>
using namespace std; // NO NEED TO CHECK THE PRIORITIES
int prio(char s)
{
    if (s == '+' or s == '-')
        return 1;
    else
        return 2;
}
string solve(string v1, string v2, char ch)
{
   string s="";
   s.push_back(ch);
   s+=v1;
   s+=v2;
   return s;
}
int main()
{
    string s = "79+4*8/3-"; // infix expression
   
    stack<string> val;
    for (int i = 0; i < s.length(); i++)
    {
        // check if s[i] is a digit;
        int ascii = int(s[i]);
        if (ascii >= 48 and ascii <= 57)
            val.push(to_string(ascii - 48)); // ascii kitna aage h zero se
        else
        {
                    char ch = s[i];
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
        }
    }
    
    cout <<"PREFIX  "<< val.top();
}