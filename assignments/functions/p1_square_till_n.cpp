#include <iostream >
using namespace std;
int fact(int a)
{
    
  int b=a*a;
    return b;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)

    {
        cout << fact(i) << " ";
    }
}