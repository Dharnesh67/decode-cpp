#include <iostream>
#include <vector>
#include <algorithm>  // this is called the bubble sorting algorithm

using namespace std;
int main()  // no extra spacing space complexity o(1)
{
    vector<int> v;
    v = {5, 0,1,2,0,0,4,0,3};
    for (int j = 0; j < v.size() - 1; j++) // passes is (n -1 )
    {
        for (int i = 0; i < v.size() - j - 1; i++) // time complexity is o(n square)
        {
            if (v[i]==0)
            {
                swap(v[i], v[i + 1]);
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
