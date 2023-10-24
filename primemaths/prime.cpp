#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,b=1;
    cin >> n;
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << false;
            b=0;
            break;
        }
       
    }
   if(b==1) cout<<true;
    return 0;
}
//   bool isprime(int n){
//         if(n==1) return false;
//       for(int i =2;i<=sqrt(n);i++){
//           if(n%i==0) {return false;
//           }
//       }
//       return true;
//     } // is prime function 