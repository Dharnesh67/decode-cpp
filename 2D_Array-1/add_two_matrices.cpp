#include<iostream>
using namespace std;
int main(){
int c[3][3];
int a[3][3]={1,2,3,4,5,6,7,8,9};   // for adding two mtrices the order of two must be same
int b [3][3]={2,3,4,5,7,8,8,3,4};
for (int i = 0; i <3; i++)
{
  for (int  j = 0;j<3; j++)
  {
    c[i][j]=a[i][j]+b[i][j];
    cout<<c[i][j]<<" ";
  }
  cout<<endl;
}





    return 0;

}