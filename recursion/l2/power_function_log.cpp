#include <iostream>
using namespace std; // a ki power b in log time complexity
int pow(int a, int b)
{
            // O(log(n))
    if (b == 1)
        return a;
    int ans = pow(a, b / 2); // ye ek baar hi call laga kar dono ki value claculate kar lega
    if (b % 2 != 0)  // power odd hoti h to ek baar multiply kar do
    {
        return ans * ans *a;   // kyuki odd power divide hote hi kam ho jayegi actual value se
    }
    else return ans *ans;
    // 2^16 ==2^8 *2^8 half kardo powers ko
    //  number of calls half ho jayegi har baar
    // log me hogi  time complexity
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << pow(a, b);

    return 0;
}