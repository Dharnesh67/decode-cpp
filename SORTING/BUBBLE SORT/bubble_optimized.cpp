#include <iostream>
#include <vector>
#include <algorithm> // this is called the bubble sorting algorithm

using namespace std;
int main() // no extra spacing space complexity o(1)
{
    int b = 0; // check lagao sorted check karne ke liye
    vector<int> v;
    v = {5, 4, 3, 0, -4, -6, 2, 1};
    for (int j = 0; j < v.size() - 1; j++) // passes is (n -1 )
    {   
        b=1;
        // not sorted then do this 
            for (int i = 0; i < v.size() - j - 1; i++) 
            {
                if (v[i] > v[i + 1])
                {
                    swap(v[i], v[i + 1]);
                    b=0;  // agar sorted nhi  h to check ko change kat do
                }
            }
        
        if (b=1) // agar sorted h to break laga do har baar check hoga 
        {
            break;
        }
    }

for (int i = 0; i < v.size(); i++)
{
    cout << v[i] << " ";
}

return 0;
}
