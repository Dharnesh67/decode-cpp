#include <iostream>
#include <vector> /**/
using namespace std;
int main() 
{

   vector<int>v(7);
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

            sum+= (v[i]*x);      
             x*=2;

    }
    
   
   cout<<sum;

    return 0;
}
