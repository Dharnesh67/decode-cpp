#include <iostream>   // merging two array in ascebding order
#include <vector>
using namespace std;
vector<int>merge(vector<int> &a, int m, vector<int> &b, int n)
{
    m = a.size();
    n = b.size();
    vector<int> c(m + n);
    int i = 0, j = 0, k = 0;
    while (i <= m - 1 && j <= n - 1) {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    // for remaining
    if (i == m)
    {
        while (j <= n - 1)
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    if (j == n)  // if a and b has uneven size
    {
        while (i <= m - 1)
        {
            c[k] = a[i];
            i++;
            k++;
        }
    }

for (int i = 0; i <c.size(); i++)
{
    cout<<c[i]<<" ";
}

return c;

}
int main()
{
    vector<int> a;
    a = {1,4,5,8};
    int m = a.size();
    vector<int> b;
    b = {2,3,6,7,10,12};
    int n = b.size();
    merge(a, m, b, n);
}