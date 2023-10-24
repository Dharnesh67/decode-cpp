#include <iostream>
using namespace std;
int main()
{

    int mark[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> mark[i];
    }

    for (int i = 0; i < 6; i++)
    {
        if (mark[i] < 35)
        {
            cout << i << " ";
        }
    }

}

