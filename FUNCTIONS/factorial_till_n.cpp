#include <iostream >
using namespace std;
int fact(int a)
{
    int b = 1;
    for (int i = 1; i <= a; i++)
    {
        b = b * i;
    }
    return b;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)

    {
        cout << fact(i) << " ";
    }
}