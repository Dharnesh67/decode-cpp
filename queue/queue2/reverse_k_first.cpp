#include <iostream>
#include <queue>
#include<stack>
using namespace std;
int main()
{   queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    int i=1;
    int k;
    cin>>k;
    stack<int>st;
    for (int i = 0; i < k; i++)
    {
         st.push(q.front());
         q.pop();
    }
    while (st.size()>0)
    {
       q.push(st.top());
       st.pop();
    }
    for (int i = 0; i <q.size()-k; i++)
    {
        q.push(q.front());
        q.pop();
    }
    
    while (q.size()!=0)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}