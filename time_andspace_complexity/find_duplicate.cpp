#include <iostream>
#include <vector>
// we have to find the duplicate number in ascending order from 1 to n filled in array 
using namespace std;
int main()
{

    int arr[] = {6, 3, 2, 4, 6, 7, 1, 5}; // size is 8 means n+1 size ka array h

    // method 1
    //  BRUTE FORCE method (more time complexity)
    //    for (int i = 0; i <9; i++)
    //    {
    //     for (int j =i+1; j<9; j++)
    //     { if (arr[i]==arr[j])
    //        {     cout<<arr[i];
    //             break;
    //         }
    //     }
    //    }

    // method 2
    // more efficient code
    // but we are using extra space
    // new vector is made up and we are filling it
    // for (int i = 0; i < 8; i++)
    // {

    //     if (a[arr[i]] == 0)
    //     {
    //         a[arr[i]] = 1;
    //     }
    //     else if (a[arr[i]] = 1)
    //     {
    //         cout << arr[i];
    //         break;
    //     }
    // }


    // method 3 best method no more time no space complex
    // thodi si maths 
    //sum of array
    int sum=0;
    for (int i = 0; i <8; i++)
    {
        sum+= arr[i];
    }
    int answer = 0;
    answer = sum- (7*(7+1))/2 ; // sum of array - sum of n terms of n sized arrray
    cout<<answer;

    


    return 0;
}