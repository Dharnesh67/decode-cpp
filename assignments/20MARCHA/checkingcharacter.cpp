#include <iostream>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if (x >= '0' && x <= '9')
    {
        cout << "digit";
        /* code */
    }
    else if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        cout << "alphabet";
        /* code */
    }
    else
        cout << "invalid char";

    return 0;
}