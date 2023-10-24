#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverse(int i, int j, vector<int> &a)
{

    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;  //swap kar diya
}
int main()
{
    vector<int> a;
    int m, n;
    cin >> m >> n;
    a = {1, 6, 2, 3, 7, 4};

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    reverse(m, n, a);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
