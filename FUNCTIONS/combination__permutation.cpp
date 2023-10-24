#include <iostream>
using namespace std;
int fact(int n)
{
    int sum = 1; // FUNCTION of factorials
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}
int main()
{
    int n, r;
    cin >> n >> r; // function ko call lagana
    int combi, permi;
    combi = fact(n) / (fact(n - r) * fact(r));
    permi = fact(n) / fact(n - r);

    cout << "THE COMBINATION OF TWO NUMBERS IS " << combi << endl;
    cout << "the permutation of the two numbers is " << permi;

    return 0;
}
