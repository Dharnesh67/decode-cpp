#include <iostream>
using namespace std;
void fAl(int n, int *ptr1, int *ptr2)
{
    // last digit is
    *ptr2 = n % 10;
    // first digit
    while (n > 9)
    {
        n /= 10;
    }
    *ptr1 = n;
    return;
}
int main()
{
    int n;
    cin >> n;
    int firstn, ld;
    int *ptr1 = &firstn;
    int *ptr2 = &ld;
    fAl(n, ptr1, ptr2);
    cout << *ptr1 << " " << *ptr2;
}