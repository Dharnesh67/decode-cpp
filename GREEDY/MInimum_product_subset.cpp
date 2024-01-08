#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int minproduct(vector<int> &arr)
{
    int prod_p = 1;
    int prod_n = 1;
    int largeNegativ = INT_MIN;
    int cn = 0;
    int cp = 0;
    int cz = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            cn++;
            prod_n *= arr[i];
            largeNegativ = max(largeNegativ, arr[i]);
        }
        else if (arr[i] == 0)
        {
            cz++;
        }
        else
        {
            cp++;
            prod_p *= arr[i];
        }
    }
    if (cn == 0)
    {
        if (cz > 0)
            return 0;
        else
        {
            int it = *min_element(arr.begin(), arr.end());
            return it;
        }
    }
    else
    {
        if (cn % 2 != 0)
        { // odd negatives
            return prod_n * prod_p;
        }
        else
        { // even negatives
            return (prod_n / largeNegativ) * prod_p;
        }
    }
}
int main()
{
    vector<int> v = {-2, -1,-2, 1, 3, 6};
    cout << minproduct(v);
    return 0;
}