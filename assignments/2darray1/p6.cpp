
#include <iostream>
using namespace std;

int main()
{ // here it is necesarry to give the size of matrix
    int a[5][5] = {1,2,3,4,5,3,4,5,6,7,7,6,5,4,3,8,7,6,5,4,1,2,37,8,0};

    for (int i = 0; i < 5; i++) /// i is for rows
    {
        for (int j = 0; j < 5; j++) // j is for columns
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
        for (int  i = 0; i < 5; i++) /// i is for rows
    {
        for (int j = 0; j < 5; j++) // j is for columns
        {
           if (i==(5/2)|| j==(5/2))    // >> i == n/2
           {
             cout << a[i][j] <<" ";
           }
          else cout<<"  ";
           
           
        }
        cout << endl;
    }


    return 0;
}