#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> res;
vector<vector<string>> result;
bool canplace(int row, int col, int n)
{
    for (int i = row - 1; i >= 0; i--) // column check
    {
        if (res[i][col] == 'Q')
            return false;
    }
    for (int i = row - 1, j = col - 1; i >= 0 and j >= 0; i--, j--) // upper left diagonal
    {
        if (res[i][j] == 'Q')
            return false;
    }

    for (int i = row - 1, j = col + 1; i >= 0 and j < n; i--, j++) // upper left diagonal
    {
        if (res[i][j] == 'Q')
            return false;
    }
    return true;
}
void f(int row, int n)
{
    if (row == n)
    {
        vector<string> temp;
        for (int i = 0; i < n; i++)
        {
            string ans="";
            for (int j = 0; j < n; j++)
            {
                ans+=res[i][j];
            }
            temp.push_back(ans);
        }
            result.push_back(temp);
        return;
    }
    for (int col = 0; col < n; col++)
    {
        if (canplace(row, col, n))
        {
            res[row][col] = 'Q';
            f(row + 1, n);
            res[row][col] = '.';
        }
    }
}
vector<vector<string>> solveNQueens(int n)
{
    res.resize(n, vector<char>(n, '.'));
    f(0, n);
    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<string>> ans = solveNQueens(n);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << endl;
        }
        cout << endl;
    }
    return 0;
}