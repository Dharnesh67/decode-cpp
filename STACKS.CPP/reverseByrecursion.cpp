#include <iostream>
#include <stack>
using namespace std;
void recdisplay(stack<int> &st)
{
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    recdisplay(st);
    cout << x << " ";  // call ke baad print
    st.push(x);
}
int main()
{

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << st.size() << endl;
    recdisplay(st);

    return 0;
}