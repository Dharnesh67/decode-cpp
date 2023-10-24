#include <iostream >
using namespace std;
int digits(int a)
{
    int i;
    for (i = 1; i <= a; i++)
    {
        a /= 10;
        if (a < 0)
        {
            break;
        }
    }
    cout << i * i;
}
int main()
{
    int n;
    cin >> n;
    digits(n);
}