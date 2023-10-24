#include <iostream>
using namespace std;
int main()
{

  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int k = n - 1; k >= i; k--)
    {
      cout << " ";
      /* code */
    }

    for (int j = 1; j <= n; j++)
    {
      cout << "*";
      /* code */
    }

    cout << endl;
  }

  return 0;
}