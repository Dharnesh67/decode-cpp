#include <iostream>
#include <vector>
#include <algorithm>// sahi jagah mark karni h 
using namespace std;
int main()
{ /// mark value from 0 to n-1  while maintaining the order
    int v[] = {5,1,7,9,2,25};
    vector<int>a(5,0); //visited vector
    for (int i = 0; i <6; i++)

    {
        int min =10000;
        int idx =-1;
        for (int j = 0;j<6; j++) 
        {
           if(a[j]==1){
            continue;
            }
           else{
            if (min>v[j])
            {
                min = v[j];
                idx=j;
               
            }
            
           }
        }
        v[idx]=i;
        a[idx]=1; //visited vector me 1 mark kar do
        
    }
    
    for (int ele :  v ) // for each loop  (koi farak nhi padta same baat hi h )
    {
        cout << ele << " ";
    }

    return 0;
}
