#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int arr[9] = {1, 2, 3, 44, 55, 33, 6, 7, 8};
    for (int i = 0; i < 9; i++)
    {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
