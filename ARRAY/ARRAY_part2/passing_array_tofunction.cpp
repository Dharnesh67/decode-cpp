#include <iostream>
using namespace std;
void fun(int ar[]) // this is equals to int*arr;
{

    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}
void change(int c[])
{

    c[2] = 400;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // accesing the element of array in another function
    int size = sizeof(arr) / sizeof(arr[0]); // size of array
    cout << size<<endl;
    fun(arr);
    change(arr);
    fun(arr);
    return 0;
}