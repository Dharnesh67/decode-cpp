#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(10, 1);
    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < 10; i++)
    {
        v[i] = v[i - 1] + v[i];
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int totalsum = v[9];
    for (int i = 0; i < 10; i++)
    {
        if (v[i] == totalsum - v[i])
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}