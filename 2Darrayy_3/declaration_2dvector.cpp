#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    vector<vector<int > >a(4,vector<int>(3,69));
    /*refer copy*/
    for (int i = 0; i < 4; i++)
    {
        for (int j =0;j<3; j++)
        {
          cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
   
    return 0;
}
