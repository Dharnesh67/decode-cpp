#include <iostream>
using namespace std;
int main()
{

    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << "point is origin";
        /* code */
    }

    if (y == 0 && x != 0)
    {

        cout << "the point lie on x axis ";
    }
    else if (x == 0 && y != 0)
    {
        cout << "the point lies on y axis ";
        /* code */
    }

    return 0;
}