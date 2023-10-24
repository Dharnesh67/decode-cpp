#include <iostream>
using namespace std;
void triangle(int n)
{                               // FUNCTION BANANA 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{

    triangle(3);
    triangle(4);
    triangle(5);  // function ko call lagana 

    return 0;
}
