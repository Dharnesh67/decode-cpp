#include <iostream>
#include <vector>
#include <algorithm>  // this is called the bubble sorting algorithm

using namespace std;
int main()  // no extra spacing space complexity o(1)
{
    vector<int> v;
    v = {5,-6, 4, 3,0,-4, 2, 1};
    for (int j = 0; j < v.size() - 1; j++) // passes is (n -1 )
    { int b =1;  // b ka USE SIRF OPTIMIZE KANE KE LIYE HI KIYA  H

         for (int i = 0; i < v.size() - j - 1; i++) 
        {
            if (v[i]<v[i + 1])  // yaha par array check hoti rahegi ke sorted h ya hi 
            // agar sorted h to b ki value change nhi hogi or loop khatam ho jayega 
            // or b=0 ho jata h to sorting kardo 
            {
               b=0;
               break; // check karlo phle phir if lagao agar sorted nhi h to buble sort kardo 
            }
        }
    
       if (b==0)
       {
         for (int i = 0; i < v.size() - j - 1; i++) 
        {
            if (v[i]<v[i + 1])
            {
                swap(v[i], v[i + 1]);
            }
        }
       }
       else {break;}
       
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
