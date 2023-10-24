#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    while (n > 0)
    {

        if (n % 2 == 0)
        {
            sum += (n % 10);
            /* code */
        }
        n /= 10;
        i++;

        /* code */
    }
    cout << sum;

    return 0;
}