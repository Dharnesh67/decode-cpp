#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr(4); // only allowed to give the array input is after declaring its size
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        // int x;
        //  cin>>x;
        // arr.push_back(x); if we not given the vect0r its size
    }

    return 0;
}
