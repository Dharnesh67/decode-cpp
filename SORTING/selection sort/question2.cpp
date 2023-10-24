#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s = "bibdisffgihghooapier";
    for (int i = 0; i < s.length() - 1; i++)
    {
        int b = 0;
        for (int j = 0; j < s.length() - i - 1; j++)
        {
            if (s[j] > s[j + 1])
            {     // bubble sort laga rakha h 
                swap(s[j], s[j + 1]);
                b = 1;
            }
        }
        if (b=0)
        {
            break;
        }
        
    }

    cout << s;

    return 0;
}
