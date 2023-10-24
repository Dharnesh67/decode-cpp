#include <iostream>
#include <vector>
using namespace std;
int main()
{
   
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x;
    cout << "ENTER The number";
    cin >> x;

  
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                if (a[i] + a[j] + a[k] == x)
                {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }

 
}
