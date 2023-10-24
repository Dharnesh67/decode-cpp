#include <iostream>
#include <stack>
using namespace std;
void removekthfrmTop(stack<int>&st,int k){
     stack<int>dummy;
     while(k>0){
        dummy.push(st.top());
        st.pop();
        k--;
             }
             dummy.pop();
             while (dummy.size()!=0)
             {
                st.push(dummy.top());
                dummy.pop();
             }
             
}
void display(stack<int>&st){
    if(st.size()==0 ) return; // idhar return ki  jagah agar push karenge to bottom me push ho jayega
    int x=st.top();  // call ke phle printing
    cout<<x<<" ";
    st.pop();
    display(st);
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
     display(st);
     cout<<endl;
    removekthfrmTop(st,2);
    display(st);
    
    
    return 0;
}