#include <iostream>
using namespace std;
int main()
{ // here it is necesarry to give the size of matrix
    int a[2][7] = {
        {1, 2, 34, 7, 5, 5, 6},
        {2, 3, 4, 5, 6, 7, 7}};
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<b[1][2]<<endl;
    cout << a[0][0] << "\n";
    cout << a[1][3] << endl;
    cout << a[0][4];

    return 0;
}