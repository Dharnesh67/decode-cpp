#include <iostream>
#include <stack>
using namespace std;
void pushatbottom(stack<int>&st,int val){
    if(st.size()==0 ){
        st.push(val);
        return;
    }
    int x=st.top();  // call ke phle printing
    st.pop();
    pushatbottom(st,val);
    st.push(x); 
}
void display(stack<int>&st){
    if(st.size()==0 ) return; // idhar return ki  jagah agar push karenge to bottom me push ho jayega
    int x=st.top();  // call ke phle printing
    cout<<x<<" ";
    st.pop();
    display(st);
    st.push(x); 
}
void reverse(stack<int>&st){
    if(st.size()==1 ) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushatbottom(st,x);
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
     reverse(st);
     display(st);
    
    return 0;
}