#include <iostream>
using namespace std;
int main()
{ // here it is necesarry to give the size of matrix
       int sum = 0;
    int a[4][7] = {
        {1, 2, 4, 7, 9, 5, 6},
        {2, 3, 4, 5, 6, 7, 7},
        {2, 3, 25, 5, 66, 7, 8},
        {2, 30, 4, 5, 69, 7, 7}};
    for (int i = 0; i < 4; i++) /// i is for rows
    {
        for (int j = 0; j < 7; j++) // j is for columns
        {
            sum+=a[i][j];
            
        }
    }    cout <<"SUM OF ALL THE ELEMENTS IS >>"<<sum;


    return 0;
}