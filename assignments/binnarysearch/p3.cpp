#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// find row with max ones
int main()
{
    int v[5][6] = {{0, 1, 1, 1, 0, 0},
                   {0, 0, 1, 1, 1, 0},
                   {0, 0, 0, 0, 0, 0},
                   {1, 1, 1, 1, 1, 0},
                   {0, 0, 1, 1, 1, 1}};

    int maxOnes = 0;
    int maxOnesRowIndex = 0;

    for (int i = 0; i < 5; i++)
    {
        int lo = 0, hi = 6 - 1;
        int onesCount = 0;

        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;

            if (v[i][mid] == 1)
            {
                onesCount = mid + 1;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }

        if (onesCount > maxOnes)
        {
            maxOnes = onesCount;
            maxOnesRowIndex = i;
        }
    }

    cout << "Row with the most ones: " << maxOnesRowIndex << endl;

    return 0;
}
