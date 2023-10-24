#include <iostream>
using namespace std; // see this in 15 th lecture
int main()
{ // opposite of prime is a composite number
    int n;
    cin >> n;
    bool prime = true; // here we can use the bolean variable to check the number
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
        // we can here check the number is prime or not here with this code
    }
    if (prime == true)
    {
        cout << "prime";

        /* code */
    }

    else
        cout << "composite";

    return 0;
}