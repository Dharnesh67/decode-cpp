#include <iostream>
#include<vector>
using namespace std;
void prin(vector<int>&v,int i){
  if(i==v.size()) return;
  cout<<v[i]<<" ";
  prin(v,i+1);
}
int main()
{
    vector<int>v;
    v={1,2,3,4,5,6,7};
    prin(v,0);
}
