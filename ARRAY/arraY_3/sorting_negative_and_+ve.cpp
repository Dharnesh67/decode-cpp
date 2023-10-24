#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &v)
{
    int n = v.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (v[i] > 0 && v[j] < 0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }

        else if (v[j] > 0)
        {                               // swap marna h jab tak i greater than j na ho jaye
            j--;
        }

        else if (v[i] < 0)
        {
            i++;
        }
    }
}
int main()
{
    vector<int> v;
    v = {-1, -2, 3, -4, 6, 7, 8, -9, 4, -5, -6};
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
