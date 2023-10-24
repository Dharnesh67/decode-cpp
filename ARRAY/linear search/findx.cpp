#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << " enter the element you  wants to search:";
    cin >> x;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
        cout << "present";
    else
        cout << "Not present ";
    return 0;
}
