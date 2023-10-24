#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;
string remove(string s)
{
    stack<char> st;
    st.push(s[0]);
    int i = 0;
    while (i < s.length())
    {   
        if(st.top()!=s[i]){
            st.push(s[i]);
        }
        i++;
    }
    string sn="";
    while(st.size()!=0) {
        sn+=st.top();
        st.pop();
    }
    reverse(sn.begin(),sn.end());
    return sn;
}
int main()
{

    string s;
    cin >> s;
    cout<<remove(s);

}