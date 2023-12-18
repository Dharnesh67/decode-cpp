#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v; // array me sabse chhote element ke
                   // saath phle element ko swap kar do
    v = {5, 4, 3, 0, -3, 2, 1};
    for (int j = 0; j < v.size() - 1; j++)
    {
        // int min = 100000000;
        // int idx = -1;
        // for (int i = j; i < v.size(); i++)
        // {
        //     if (v[i] < min)
        //     {
        //         min = v[i];
        //         idx = i; // minimum element nikal kar swap kara do first element se
        //     }            // or index bhi nikal lo uska
        // }
        int m= *min_element(v.begin()+j,v.end());
        swap(v[j], m);
    }
    for (int ele : v) // for each loop  (koi farak nhi padta same baat hi h )
    {
        cout << ele << " ";
    }

    return 0;
}
