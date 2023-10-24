#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()  // no extra spacing space complexity o(1)
{
    vector<int> v;
    v = {5, 4, 3,0,-4,-6, 2, 1};
 
        for (int i = 0; i < v.size()- 1; i++) // time complexity is o(n square)
        {
            if (v[i] > v[i + 1])
            {
               break;
            }
        }
  
  

    return 0;
}
