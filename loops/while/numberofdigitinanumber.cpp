#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int i = 0;
    while (x > 0)
    {
        x = x / 10;
        i++;
    }
    cout << i;
    return 0;
}
