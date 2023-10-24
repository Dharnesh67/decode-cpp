#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    int x;
    cin >> x;
    a = {1, 3, 2, 4, 3, 4, 1, 6};
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[i] + a[j] == x)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }

    return 0;
}
