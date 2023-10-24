#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> arr;
    arr = {1, 2, 4, 5}; // donot use the square brackets 
    arr.push_back(10); // pushback

    cout << arr[4];
    return 0;
}
