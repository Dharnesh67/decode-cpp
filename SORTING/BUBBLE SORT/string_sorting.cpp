#include <iostream>
#include <vector>
#include <algorithm>  // this is called the bubble sorting algorithm

using namespace std;
int main()  // no extra spacing space complexity o(1)
{
    string v = "ANBSINDDLANDCXIAHDA";
    for (int j = 0; j < v.size() - 1; j++) // passes is (n -1 )
    {
        int b = 0;
        for (int i = 0; i < v.size() - j - 1; i++) // time complexity is o(n square)
        {
            if (v[i] <v[i + 1])
            {
                swap(v[i], v[i + 1]);
                b=1;
            }
        }
        if(b=0){
            break;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
