#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;

 //part of bhul bhulaiya
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <=n; j++)
    {
        cout<<min(i,j);
        /* code */
    }
    

   
    cout << endl;
  }

  return 0;
}