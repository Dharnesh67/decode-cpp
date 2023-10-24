#include <iostream>
using namespace std;
int sum(int a, int b, int s) // program to find sum of odd between a and b
{
    if (a == b)
    { if (b % 2 != 0)
            return s + b; // agar last element odd h to
        else
            return s;// base case rokne ke liye
    } 
    if (a % 2 != 0)  s += a;// agar a odd h to aage call  kar do
    return sum(a+1,b,s);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << sum(a, b, 0);
}