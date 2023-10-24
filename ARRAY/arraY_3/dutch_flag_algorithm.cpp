#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &v) // sorting 0 ,1 ,2 using algorithmn array 3 >>1:12
{
    int n = v.size();
    int lo = 0, mid = 0, hi = n - 1;
    while (mid <= hi)
    {
        if (v[mid] == 2)
        {
            int temp = v[mid];
            v[mid] = v[hi];
            v[hi] = temp;
            hi--;
        }
        else if (v[mid] == 0)
        {

            int temp = v[mid];
            v[mid] = v[lo];
            v[lo] = temp;
            lo++;
            mid++;
        }
        else
            mid++;
    }
}

int main()
{

    vector<int> a;
    a = {0, 2, 1, 2, 1, 0, 0, 1, 2};
    sort(a);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
