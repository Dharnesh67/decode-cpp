// program to find the minimum number in given array
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int x;
    cout << "enter the sze of array";

    cin >> x;

    int arr[x];

    int max = arr[0];
    int min = INT_MAX;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < x; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "minimum number in given array is " << min;
    return 0;
}
