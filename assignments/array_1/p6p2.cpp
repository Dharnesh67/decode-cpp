#include <iostream>
using namespace std;
int main()
{

    int a[7] = {1, 2, 1, 2, 3, 4, 4};

    for (int i = 0; i < 7; i++)
    {
        int count = 0;
        for (int j = 0; j < 7; j++)
        {
            if (i != j && a[i] == a[j])
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << a[i];
        }
    }
}
