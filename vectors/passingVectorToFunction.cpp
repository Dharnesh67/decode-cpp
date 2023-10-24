#include <iostream>
#include <vector>
using namespace std;
void change(vector<int>&a)
{

    a[3] = 10;
  
    
}
int main()
{

    vector<int> arr;
    arr = {1, 2, 4, 5}; // donot use the square brackets
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    change(arr);
      for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
   
    return 0;
}
