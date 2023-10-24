#include <iostream>
#include <vector> /* LEETCODE 861*/
using namespace std;

int main()
{ 
    vector <vector<int>> grid;
    grid={{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    int r = grid.size();
    int c = grid[0].size();
    // making of first column all 1
    for (int i = 0; i < r; i++)
    {
        if (grid[i][0] == 0)
        {
            for (int j = 0; j < c; j++)
            {
                if (grid[i][j] == 0)
                    grid[i][j] = 1; // fliping    of 0 and one 
                else 
                    grid[i][j] = 0;
            }
        }
    }
    // fliping of column where no of 0 is greater than number of 1

    for (int j = 0; j < c; j++)
    {
        int numz = 0, numo = 0;
        for (int i = 0; i < r; i++)
        {
            if (grid[i][j] == 0)
            {
                numz++;
            }
            else
                numo++;
        }
        if (numz > numo)
        { // flip
            for (int i = 0; i < r; i++)
            {
                if (grid[i][j] == 0)
                    grid[i][j] = 1;

                else
                    grid[i][j] = 0;
            }
        }
    }
    int sum = 0;

    for (int i = 0; i < r; i++)
    {
        int x = 1;
        for (int j = c - 1; j >= 0; j--)
        {
            sum += (grid[i][j] * x);
            x *= 2;
        }
    }

    cout<< sum;

    return 0;
}
