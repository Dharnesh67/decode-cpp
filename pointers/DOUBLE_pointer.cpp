#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;
    int **doubleptr = &ptr; // double pointer stores the  address of  pointer

    cout << **doubleptr << " " << *ptr<<" "<<x;
    return 0;
}
