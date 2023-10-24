#include <iostream>
#include <queue>
#include<stack>
using namespace std;
void reverse(queue<int>& q){
stack<int>st;
    while (!q.empty())
    {
        int x=q.front();
        q.pop();
        st.push(x);
    }
    while (st.size()>0)
    {
        int x=st.top();
        st.pop();
        q.push(x);
    }
    
    
}
void display(queue<int>& q){
     int i = 0;
    while (i < q.size())
    { // display
        int a = q.front();
        cout << q.front() << " ";
        q.pop();
        q.push(a);
        i++;
    }
    cout<<endl;
}
int main()
{
    queue<int> q;
    // push
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    reverse(q);
    display(q);
    
}