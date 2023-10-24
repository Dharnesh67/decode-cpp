#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    vector<vector<int > >a(5,vector<int>(4,69));
    /*refer copy*/
    for (int i = 0; i < 5; i++)
    {
        for (int j =0;j<4; j++)
        {
          cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
   
    return 0;
}
