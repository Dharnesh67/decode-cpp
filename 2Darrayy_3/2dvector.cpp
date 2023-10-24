#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v, b, c;
    v = {1, 2, 3};
    b = {4, 5};
    c = {6, 7, 8, 9};
    vector<vector<int>> v1;
    v1 = {v, b, c};
     cout<<v1[1][1];

    return 0;
}
