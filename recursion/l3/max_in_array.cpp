#include <iostream>
#include <vector>
using namespace std;
void prin(int arr[], int i, int n, int max)  // maximmum value
{ 
    if (i == n){
        cout << max;
        return;}
    if (arr[i] > max)
        max = arr[i];
    prin(arr, i + 1, n, max);
}
int main()
{
    int v[] = {1, 212, 3, 4, 5, 96, 7};
    int max =-10000000;
    prin(v, 0, 7, max);
}
