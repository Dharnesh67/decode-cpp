#include <iostream>
#include <stack>
using namespace std;
void isbalanced(string s)
{
    stack<char> st;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
            }
        }
        i++;
    }
    if (st.size() == 0)
        cout << "true";
    else
        cout << "false";
}
int main()
{

    string s;
    cin >> s;
    isbalanced(s);
}