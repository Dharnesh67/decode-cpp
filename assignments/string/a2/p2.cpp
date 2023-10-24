#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  string a;
  getline(cin, a);
  int n = a.length();
  char max1 = '!', max2 = '!';
  for (int i = 0; i < n; i++) // max
  {
    if (max1 < a[i])
    {
      max2 = max1;
      max1 = a[i];
    }
    if (max2 < a[i] && a[i]!=max1)
      max2 = a[i];
  }
  cout << max2;
}