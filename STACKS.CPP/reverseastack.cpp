#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // using two extra stacks

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << st.size() << endl;
    stack<int> dummy;
    while (st.size() != 0)
    {
        cout << st.top() << " ";
        dummy.push(st.top());
        st.pop();
    }
    // storing the values of st in dummy
    cout << endl;
    stack<int> dummy2;
    while (dummy.size() != 0)
    {
        dummy2.push(dummy.top());
        dummy.pop();
    }

    while (dummy2.size() != 0)
    {
        st.push(dummy2.top());
        dummy2.pop();
    }

    while (st.size() != 0)
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}