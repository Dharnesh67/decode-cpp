#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void color(vector<vector<char>> &grid, int r, int c)
    {
        if (r < 0 or c < 0 or r > grid.size() - 1 or c > grid[0].size() - 1 or grid[r][c] !='1')
        {
            return;
        }
        grid[r][c] ='0';
        color(grid, r + 1, c);
        color(grid, r, c + 1);
        color(grid, r - 1, c);
        color(grid, r, c - 1);
    }
    int numIslands(vector<vector<char>>&grid)
    {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j= 0; j< grid[0].size(); j++)
            {
                if(grid[i][j]==1){
                    count++;
                    color(grid,i,j);
                }

            }
        }
        count;
    }
};
int main()
{
}