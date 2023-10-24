#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v; 
    v = {5, 3,1,4,2};
    int num=0;
    for (int i = 0; i < v.size(); i++)
    {
      
       num*=10;
       num+=v[i];

    }
    cout<<num;

    return 0;
}
