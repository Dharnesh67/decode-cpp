#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << " the radius is :";
    cin >> r;
    int area = 3.14 * r * r;
    int circumference = 2 * 3.14 * r;
    if (area > circumference)
    {
        cout << "the  area is greater than circumference";
    }
    else
        cout << " the circumference is greater than area";

    return 0;
}