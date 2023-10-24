#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int x;
    cout<<"ENTER THE SIZE OF ARRAY";
    cin >> x;
    int arr[x];
    int max=1;

    for (int i = 0; i < x; i++)
    {
       cin>>arr[i];

    }
    for (int i = 0; i <x; i++)
    {
      max*=arr[i];
    }
    cout<<"the product of the elements of array is :"<<max;
    return 0;
}
