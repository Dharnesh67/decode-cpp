#include <iostream>
#include <vector> /**/
using namespace std;
// int potwo(int n)
// { int po = 1;
//    for (int i = 0; i <n; i++)
//    {  // power of two ka function
//            po = po*2;
    
//    }
   
// return po;


// }

int main() 
{

    vector<int > v(7);
   for (int i = 0; i < v. size(); i++)
   {
    int a;
         cin>>a;
         v[i]=a;
   }
   
    int sum =0; 
      int x=1;
    for (int i =v.size()-1; i>=0; i--)
    {
    //     sum +=   ( (v[i] ) * (potwo(x))); // alter nate
    //    x++;

            sum+= (v[i]*x);        // last  se start karenege or 2 ki power se multiply karo

             x*=2;

    }
    
   
   cout<<sum;

    return 0;
}
