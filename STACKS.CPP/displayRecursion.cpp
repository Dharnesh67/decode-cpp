#include <iostream>
#include <stack>
using namespace std;
void recdisplay(stack<int>&st){
    if(st.size()==0 ) return; // idhar return ki  jagah agar push karenge to bottom me push ho jayega
    int x=st.top();  // call ke phle printing
    cout<<x<<" ";
    st.pop();
    recdisplay(st);
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
    cout << st.size() <<endl;
    recdisplay(st);
    
    
    return 0;
}