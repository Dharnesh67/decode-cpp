#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   vector<int>v;
   v={1,2,3,4,5,9,15,18,21,24};
   int low=0,high = v.size()-1;
   int target=15;
    int c=0;
   while (low<=high)  // low<= high tak chalayenge
   {  int mid = (low+high)/2;
       if (v[mid]==target)
       {
          cout<<v[mid+1]; 
          c=1;
          break;
       }
       else if(v[mid]<target){
        low= mid+1;
       }
       else /*(v[mid]>high)*/{
        high = mid-1;
       }
   }
   if (c==0)
   {
     cout<<v[low]; //kuchh nhi mila to high < low
     // se chotta ho jayega wahi high lower bound ban jayega
     // or low upper bound ban jayeega 
   }
    return 0;
}

