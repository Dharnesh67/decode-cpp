#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int l = 0; l < 2 * n - 1; l++)
  {
    cout << "*";
  }
  cout << endl;
  for (int i = 1; i <= n; i++)
  {

    for (int j = 1; j < n + 1 - i; j++)//reverse triangle
    {
      cout << "*";
    }
    for (int k = 1; k <= 2 * i - 1; k++) //spaces

    {
      cout << " ";
      /* code */
    }
    for (int j = 1; j < n + 1 - i; j++)//rightangled triangle
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}