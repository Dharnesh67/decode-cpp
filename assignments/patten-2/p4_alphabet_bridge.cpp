#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
int a=1;
for (int i = 1; i <=2*n-1; i++)
{
    cout<<char(i+64);
    /* code */
}
cout<<endl;

  for (int i = 1; i <= n; i++)
  {

    for (int j = 1; j <n +1 - i; j++)//reverse triangle
    {
      cout <<char(64+j);
    }
for (int l = 1; l <=2*i-1; l++)
{
   cout<<" ";
   a++;
}


  for (int k = 1; k <n + 1 - i; k++)
    {
      cout <<char('A'+n+i+k+-2);
    
    }


    cout<<endl;
  }
  
}