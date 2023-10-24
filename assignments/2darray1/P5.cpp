
#include <iostream>
using namespace std;
int main()
{ // here it is necesarry to give the size of matrix
    int a[4][4] = {1,3,5,7,3,4,7,8,1,4,12,3};

    for (int i = 0; i < 4; i++) /// i is for rows
    {
        for (int j = 0; j < 4; j++) // j is for columns
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int sum = 0,max=0,index=0;

    for (int i = 0; i < 4; i++) /// i is for rows
    {
        for (int j = 0; j < 4; j++) // j is for columns
        {
           sum+=a[i][j];
        }
        if (max<sum)
        {
            max=sum;
            index =i;
        }
        
    }
      cout<<" the row number is "<<  index ;
    return 0;
}