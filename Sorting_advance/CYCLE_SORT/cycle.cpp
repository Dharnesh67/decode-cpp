#include <iostream>
#include <vector>
// we have to find the duplicate number in ascending order from 1 to n filled in array 
using namespace std;
int main()
{
vector<int>a;
 a = {4,1,6,2,5,3}; // size is 8 means n+1 size ka array h,
   int n = a.size();
   int i=0;
  while(i<n){
     int correctindex= a[i]-1;
     if(i==correctindex) i++;
     else swap(a[i],a[correctindex]);
  }
   for (int k = 0; k <n; k++)
   {
       cout<<a[k]<<" ";
   }
    return 0;
}