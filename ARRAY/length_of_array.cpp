#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 1, 2, 3, 4, 5, 6, 8, 9};
    int length= sizeof(arr) / sizeof(arr[0]); 
    // this will give the length of array
    cout << length;
    return 0;
}
