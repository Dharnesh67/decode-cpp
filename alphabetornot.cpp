#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "ENTER THE CHARACTER ";

    cin >> ch;
    int x = (int)ch; // a->97 to z-> 122 or A=65 to Z=90

    if ((x >= 97 && x <= 122) || (x >= 65 && x <= 90))
    {
        cout << "THE CHARACTER IS ALPHABET";
        /* code */
    }
    else
        cout << "THE CHARACTER IS not ALPHABET";

    return 0;
}