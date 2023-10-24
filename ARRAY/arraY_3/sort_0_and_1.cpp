#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void num(vector<int> &v)
{
    int n = v.size();
    int noz = 0, noo = 0; // number of zeroes and ones

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            noz++;
        }
        else
            noo++;
    }
    for (int i = 0; i < n; i++)
    {
        if (i < noz)
            v[i] = 0;

        else
            v[i] = 1;
    }
}
int main()
{

    vector<int> v;
    v = {0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0};

    // sort(v.begin(),v.end());
    num(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
