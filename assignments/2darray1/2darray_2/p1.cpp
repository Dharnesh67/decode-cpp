#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n ;
    cin>>n; // size of vector
    vector<vector<int >>a(n,vector<int>(n)) ;
    for (int i = 0; i <a.size(); i++)
    {
        for (int j = 0; j<a[0].size(); j++)
        {
           cin>>a[i][j];
        }
        
    }
    

    for (int i = 0; i <a.size(); i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
                if (i==j || (i+j)==a.size()-1)  // cross of star code
                {         
                    cout<<a[i][j]<<" ";
                }
                else cout<<"  ";

        }
        cout << endl;
    }
}