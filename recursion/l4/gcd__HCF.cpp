// #include <iostream>
// #include <vector>  // 
// using namespace std;
// void hcf(int a,int b ,int i) 
// { 
//    if (i==2)
//    { return;
//    }
//    if(a%i==0 && b%i==0) {
//     cout<<i;
//     return;
//    }
//    hcf(a,b,i-1);  // METHOD 1
// }
// int main()
// {
//   int a,b;
//   cin>>a>>b;
//  hcf(a,b,min(a,b));
// }
#include <iostream> // time complexity O(log(a+b))
#include <vector>  // D= d*q+R
using namespace std;
void hcf(int d,int D) // divisor dividend method refer copy
{ 
   if (D%d==0)
   { cout<<d;
     return;
   }
   int r=D%d;// remainder
   hcf(r,d); // dividend ko remainder se change kar denge
}
int main()
{
  int a,b;
  cin>>a>>b;
 hcf(min(a,b),max(a,b)); // divisor chotta // dividend bada
}
