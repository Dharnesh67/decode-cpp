#include <iostream>
#include <climits>
using namespace std; // program for finding the second maximum number in the given array
int main()
{
    int x;
    cout << "enter the sze of array";

    cin >> x;

    int arr[x];
    // int max=arr[0];
    int max = 0;
    for (int i = 0; i <x; i++)
    {cin>>arr[i];
    }
    
    for (int i = 0; i <x; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int smax=0;
    for (int i = 0; i <x; i++)
    {
       if (arr[i]!=max&&smax<arr[i])
       {
        smax=arr[i];
       }
       
    }
    
    cout << "second maximum number in given array is " << smax;
    return 0;
}
