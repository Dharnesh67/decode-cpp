#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> arr;
    arr = {1, 2, 4, 5}; // donot use the square brackets 
    arr.push_back(10); // pushback
    arr.push_back(14);
    for (int i = 0; i <arr.size(); i++)
    {
       cout <<arr[i]<<" ";
    }
    cout<<endl;
    arr.pop_back();
     for (int i = 0; i <arr.size(); i++)
    {
       cout <<arr[i]<<" ";
    }
    return 0;
}
