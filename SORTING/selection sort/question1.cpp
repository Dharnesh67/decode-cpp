#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int number(vector<int>&v)
{
    int num = 0;
    for (int i = 0; i < v.size(); i++)
    {

        num *= 10;
        num += v[i];
    }
    return num;
}
int main()
{
    vector<int> v;
    v = {2,3,7,9,1,6,8,8};
    for (int i = 1; i < v.size(); i++)
    {
        int j = i;
        while (j > 0 && v[j] < v[j - 1]) // pichle vaale elements me check kar lo
        {                                // using insertion sort to sort the array
            swap(v[j], v[j - 1]);
            j--;
        }
    }
    
    int n1=number(v);
    swap(v[v.size()-1],v[v.size()-2]);
    int n2=number(v);
    cout<<"the smallest possible sum is >>"<<n2+n1;
    
  

    return 0;
}
