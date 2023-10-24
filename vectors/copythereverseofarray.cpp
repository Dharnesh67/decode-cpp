#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;

    a = {1, 6,2,3,7,4};
    vector<int> b;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < a.size(); i++)
    {

        b.push_back(a[a.size() - 1 - i]);
        cout << b[i] << " ";
    }

    return 0;
}
