#include <iostream>
#include<vector>
using namespace std;
int sum(vector<int> &a, int b,int n) // program to print array in reverse order
{
    if(a[b]==n) return b ;
    if(b>a.size()-1) return -1;
    return sum(a,b+1,n);
}
int main()
{
    vector<int>a;
    int n ;
    cin>>n;
    a={1,2,35,3,6,9,5,67,86};
    int b =0;
    cout << sum(a,b,n);
}