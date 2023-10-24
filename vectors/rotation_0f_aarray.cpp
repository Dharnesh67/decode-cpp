#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverse(int i, int j, vector<int> &a)
{

    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;  //swap kar diya
}
int main()
{
    vector<int> a;
   
    a = {1, 6, 2, 3, 7, 4};

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
   int n= a.size();
   int k=2;
   reverse(0,n-k-1,a);
   reverse(n-k,n-1,a);
   reverse(0,n-1,a);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
