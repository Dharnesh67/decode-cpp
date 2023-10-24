#include <iostream>
#include <vector> /* LEETCODE 118*/
using namespace std;

int main() // cout << c << " ";  // alternate method
           // c = c * (i - j) / (j + 1); // ncr+1 = ncr * n-r / r+1
{
    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {    // sizing de rhe h 
        vector<int> a(i + 1);
        v.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                v[i][j] = 1;
            }
            else
            {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        

        for (int j = 0; j <=i; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
