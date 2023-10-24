#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &v)
{
    int n = v.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (v[j] == 1)
        {
            j--;
        }
        if (v[i] == 0)
        {
            i++;
        }
        else if (v[i] == 1 && v[j] == 0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}
int main()
{
    vector<int> v;
    v = {0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
