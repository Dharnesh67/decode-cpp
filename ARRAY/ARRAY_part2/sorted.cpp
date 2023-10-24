#include <iostream>
using namespace std;
int main()
{
    bool flag = true;
    // int a[9] = {1,3,2,4,7,9,11,6,89};
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++)
    {
        if (a[i] > a[i + 1])
        {
            break;
        }
  

}
 if(i==5){
    cout<<"array is sorted";
  }
  else cout<<" array is unsorted";
}