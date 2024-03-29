#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> m, b;

    m = {{4, 2, 1, 3}, {2, 2, 7, 8}, {5, 1, 0, 1}};
    int r = m.size();
    int c = m[0].size();
    vector<int> row(r, 0), col(c, 0); // single 1 d array  banaya or marking kali i or j ki sir f
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) // second method
        {
            /* only marking the index */
            if (m[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (row[i] == 1 || col[j] == 1) // maark ke hisaab se zero kardo  values ko
            {
                m[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
