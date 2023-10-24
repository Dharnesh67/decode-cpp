#include <iostream>
using namespace std;
int main()
{
    // array le first element ka address pointer ko de diya

    int arr[9] = {1, 2, 3, 44, 55, 33, 6, 7, 8};
    int *ptr = arr;
    // also int *ptr=&arr[0];
    cout << ptr << endl; // address
    cout << ptr[2]<<endl;      // accessing elements
    for (int i = 0; i < 9; i++)
    {
        cout << *ptr << endl;
        ptr++; // addresss kud rha h aage ko
    }

    return 0;
}
