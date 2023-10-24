#include <iostream>
#include<vector>
using namespace std;
void sum(vector<int> &a, int b) 
{   if(b==0) return;
    vector<int>temp(b);  // temporary vector for storing new array
    for (int i = 0; i <b; i++)
    {  cout<<a[i]<<" ";
       temp[i] =a[i]+a[i+1];// we are filling the new array here
    }
    cout<<endl;
    return sum(temp,b-1); // we are returning the new array here
}
int main()
{
    vector<int>a;
    a={5,4,3,2,1};
    int b =a.size();
     sum(a,b);
}