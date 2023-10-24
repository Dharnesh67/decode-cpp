#include <iostream>
using namespace std;
int main() /*
right down left up     .. pattern of printing    */

{
    int n ;
    cin>>n;
    int a[n][n] ;
     int k =1;
    int minr = 0, minc = 0, maxr =n-1, maxc = n-1; /*minimum and amximum rows and columns*/
    while (minr <= maxr && minc <= maxc&& k<=n*n)
    { 
       
        // right
        for (int j = minc; j <= maxc; j++)
        {
            a[minr][j]=k;
            k++;
        }

        minr++;
        if (minr >maxr || minc > maxc)
            break;
        // down
        for (int i = minr; i <= maxr; i++)
        {
             a[i][maxc]=k;
             k++;
        }

        maxc--;
        if (minr > maxr || minc > maxc)
            break;
        // left
        for (int j = maxc; j >= minc; j--)
        {
           a[maxr][j]=k;
           k++;
        }

        maxr--;
        if (minr > maxr || minc > maxc)
            break;
        // up
        for (int i = maxr; i >= minr; i--)
        {
             a[i][minc] = k ;
             k++;
        }

        minc++;
    }
for (int i = 0; i <n; i++)
{
   for (int j = 0; j<n; j++)
   {
           cout<<a[i][j]<<" ";
   }
  
}



}


