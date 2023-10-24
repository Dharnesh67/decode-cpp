#include <iostream>
#include<vector>
using namespace std;
int sum(vector<int> &a, int b) // program to print array in reverse order
{
    if(b==0) return a[0];
    cout<<a[b]<<" ";
    return sum(a,b-1);
}
int main()
{
    vector<int>a;
    a={1,2,3,4,5,6,7,8,9};
    int b =a.size()-1;
    cout << sum(a,b);
}