#include <iostream>
using namespace std;
int fact(int n)
{
    int sum = 1; // FUNCTION of factorials
    for (int i = 1; i <= n; i++)
    {
        sum *= i; // pascal triangle me ncr sse value nikalti h
    }
    return sum;
}
int main() // this code has the more time complexity so we choose thhe optimized way
{
    int n;
    cin >> n;
    int combi;
    for (int i =0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            combi = fact(i) / (fact(i - j) * fact(j)); // function ko call lagana
            cout << combi << " ";
        }
        cout << endl;
    }

    return 0;
}
