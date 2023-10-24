// program to find if the array contains duplicate or not
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int x;
    cout << "enter the sze of array";

    cin >> x;

    int arr[x];
    bool A = true;

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < x; i++)
    {
        for (int k = i + 1; k < x; k++)
        {
            if (arr[i] == arr[k])
            {
                A = false;
                cout<<"True";
                break;
            }
        }
    }
    if (A==true)
    {
        cout<<"False";
    }
    
    return 0;
}
