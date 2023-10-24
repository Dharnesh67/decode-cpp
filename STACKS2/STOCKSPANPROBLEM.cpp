#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    stack<int> st;
    st.push(0);
    int ans[n];
    ans[0] = 1;
    for (int i = 1; i < n; i++)
    {
        int count=1;
        while (st.size() > 0 and arr[st.top()]< arr[i])
        {
            st.pop();
        }
        ans[i]=i-st.top(); 
        st.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}