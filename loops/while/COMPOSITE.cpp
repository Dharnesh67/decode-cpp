#include <iostream>
using namespace std;
int main()
{ // opposite of prime is a composite number
  int n;
  cin >> n;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      cout << n << "number is a composite >>";
      break;
    }
    // we can not check the number is prime or not here with this code
  }

  return 0;
}