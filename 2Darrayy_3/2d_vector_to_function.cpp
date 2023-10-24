#include <iostream>
#include <vector>
using namespace std;
void change(vector<vector<int>>&v){    /*koi  size dene ki zarurat nhi h */
    v[2][3]=100;
    cout<<v.size()<<endl;
}
int main()
{
    vector<int> v, b, c;
    v = {1, 2, 3};
    b = {4, 5};
    c = {6, 7, 8, 9};
    vector<vector<int>> v1;
    v1 = {v, b, c};
     cout<<v1[2][3]<<endl;
    change  (v1);
    cout<<v1[2][3]<<endl;
  
    return 0;
}
