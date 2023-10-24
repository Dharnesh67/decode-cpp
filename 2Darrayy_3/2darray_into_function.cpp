#include <iostream>
#include <vector>
using namespace std;
void change(int arr[3][3]){ // idhar hmko dono size dena hoga jab function me pass karenge 
    arr[0][2]=164646; // thats why we use 2d vector
    
}
int main()
{
    // int a[3]={1,2,3};
    // change(a);
    // cout<<a[0];
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][2]<<"    ";
    change(arr);
    cout<<arr[0][2];

    return 0;
}
