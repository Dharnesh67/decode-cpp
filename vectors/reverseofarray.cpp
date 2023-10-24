#include <iostream>
#include <vector>
using namespace std;
// void reverse(int i, int j, vector<int> &a)
// {    // we can also use this reverse function

//     int temp = a[i];
//     a[i] = a[j];
//     a[j] = temp;  //swap kar diya
// }
int main()
{
    vector<int> a;

    a = {1, 6, 2, 3, 7, 4};

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = a.size() - 1; i >= 0; i--)
    {

        cout << a[i] << " ";
    }

    return 0;
}
