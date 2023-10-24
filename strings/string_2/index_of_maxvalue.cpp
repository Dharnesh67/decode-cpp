#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<string> x;
    x = {"0123", "0023", "456", "00182", "940", "002901"};
    int max = 0;
    int idx=0;
    string z;
    for (int i = 0; i < x.size(); i++)
    {
        int y = stoi(x[i]);
        if (max < y)
        {
            max = y;
            idx = i;
            z= x[i];
        }
    }
    cout<< max<<" "<<idx<<" string is "<<z;
    
}