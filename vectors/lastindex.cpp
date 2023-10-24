#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    int index = 0;
    int x;
    cin >> x;
    a.push_back(9);
    a.push_back(10);
    a.push_back(6);
    a.push_back(9);
    a.push_back(10);
    for (int i=a.size()-1; i>=0; i--)
    {
        if (a[i] == x)
        {
            index = i;
            break;
        }
    }

    cout << index;
    return 0;
}
