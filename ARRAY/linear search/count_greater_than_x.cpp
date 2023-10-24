#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int arr[9] = {1, 2, 3, 44, 67, 33, 6, 7, 8};
    // int max=arr[0];
    int max = 0;
    for (int i = 0; i < 9; i++)
    {
        if (x < arr[i])
            max++;
    }

    cout << "the number of element greater than given element is : " << max;
    return 0;
}
