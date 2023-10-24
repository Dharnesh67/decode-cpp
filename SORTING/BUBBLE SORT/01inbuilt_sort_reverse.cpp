#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   vector<int>v;
   v={1,2,3,4,4,5,3,5,3,7,6,8};
   sort(v.begin(),v.end());
   reverse(v.begin(),v.end());
   for (int i = 0; i <v.size(); i++)
   {
         cout<<v[i]<<" ";
   }
   

    return 0;
}

