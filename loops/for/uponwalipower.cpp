#include <iostream>
using namespace std;
int main()
{  // 1/akipowerb 
    int a, b;
    float pow = 1;
    cout<<"ENTER TWO NUMBERS>>";
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
        pow /= a;
        /* code */
    }
    cout<<"the  value of a power b is>>" << pow;

    return 0;
}