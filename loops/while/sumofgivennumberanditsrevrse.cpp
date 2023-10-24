#include <iostream>
using namespace std; // (123)+(321)=sum of reverse and number itself
int main()
{
    int n;
    cin >> n;
    int a = n;
    int reverse = 0;

    int i = 1;
    while (n > 0)
    {
        reverse *= 10;
        reverse += (n % 10);
        n /= 10;
        i++;
    }

    cout << "THE SUM OF THE NUMBER AND ITS REVERSE IS  >>" << reverse + a;
    return 0;
}