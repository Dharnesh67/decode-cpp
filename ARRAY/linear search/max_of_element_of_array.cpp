#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[9] = {1, 2, 3, 44, 67, 33, 6, 7, 8};
// int max=arr[0];
int m=INT_MIN; 

    for (int i = 0; i < 9; i++)
    {
        m=max(m,arr[i]);
    }

    cout <<"the maximum of all the elements  is : " << m;
    return 0;
}
