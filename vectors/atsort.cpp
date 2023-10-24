#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;
int main()
{
    vector<int>v;

    v = {1, 1, 2, 3, 16, 5, 6, 8, 9};

    cout << v.at(3) << endl;

    v.at(4) = 90;

    cout << v.at(4)<<endl;

   sort(v.begin(), v.end());
   for (int  i = 0; i <v.size(); i++)
   {
    cout<<v.at(i)<<" ";
   }
   

    return 0;
}
