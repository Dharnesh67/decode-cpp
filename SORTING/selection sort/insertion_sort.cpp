#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v; 
    v = {5, 3,1,4,2};
    for (int i = 1; i < v.size(); i++)
    {
        int j = i;
        while (j > 0  &&  v[j] < v[j - 1]) // pichle vaale elements me check kar lo
        {
            // if (v[j] >= v[j - 1])
            // {
            //     break;
            // }

            // if (v[j] < v[j - 1])  
            // {
            //     swap(v[j], v[j - 1]);
            // }
            swap(v[j], v[j - 1]);
            j--;
        }
    }
    for (int i = 0; i < v.size(); i++) // for each loop  (koi farak nhi padta same baat hi h )
    {
        cout << v[i] << " ";
    }

    return 0;
}
