#include <iostream>
using namespace std;
int main()
{
    char x = 65;
    for (int i = 1; i <= 26; i++)
    {
        cout << x << " -has an ascii value of - " << int(x);
        cout << endl;
        /* code */
        x++;
    }

    return 0;
}