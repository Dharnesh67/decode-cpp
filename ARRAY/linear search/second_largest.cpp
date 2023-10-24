#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int arr[9] = {1, 2, 3, 44, 67, 33, 6, 7, 8};
    // int max=arr[0];
    int max = arr[0];

    for (int i = 0; i < 9; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    int smax = INT_MIN;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] != max && smax < arr[i])
        {
            smax = arr[i];
        }
    }
    cout << " the largest number is " << max << endl;
    cout << "the second largest number is " << smax;
    return 0;
}
