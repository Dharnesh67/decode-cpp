#include <iostream>
#include <queue>
#include<stack>
using namespace std;
int main()
{  
    queue<int>q;
    stack<int>st;
    for (int i = 1; i <=6; i++)
    {
        q.push(i);
    }
    // pop first half in stack
    int n =q.size()/2;
    for (int i = 1; i <=n; i++)
    {
        st.push(q.front());
        q.pop();
    }
    // empty stack in queue
    while (st.size()>0)
    {
        q.push(st.top());
        st.pop();
    }
    // pop second half
    int x=q.size()/2;
     for (int i = 0; i <x; i++)
    {
        st.push(q.front());
        q.pop();
    }
    // INTERLEAVE ONE BY ONE
    while (st.size()>0)
    {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();          
    }
    // REVERSE the queue
    while (q.size()>0)
    {
        st.push(q.front());
        q.pop();
            }
    while (st.size()>0)
    {
        q.push(st.top());
        st.pop();
            }
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
            }
    
    
    
}