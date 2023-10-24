
#include <iostream>
using namespace std;
int main()
{

    int x = 4;
    int *p = &x; // int*   is known to store a pointer

    float y = 4.78;
    float *z = &y;

    cout << &x << " " << p << endl;
    cout << &y << " " << z;

    return 0;
}