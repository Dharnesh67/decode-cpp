#include <iostream>
#include<climits>
using namespace std;
int main()
{

    int arr[9] = {1, 2, 3, 44, 67, 33, 6, 7, 8};
// int max=arr[0];
int max=INT_MIN; 

    for (int i = 0; i < 9; i++)
    {
        if (max < arr[i ])
            max = arr[i];
    }

    cout <<"the maximum of all the elements  is : " << max;
    return 0;
}
