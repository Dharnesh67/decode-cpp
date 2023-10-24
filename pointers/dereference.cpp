#include <iostream>
using namespace std;
int main(){
// 
//         int x,y;
//     int*p=&x;   // analyse this code
//     cin>>*p;
//     cout<<x;

    int x = 9;
    int* p =&x;
    
   
    cout << &x; // & is used for printing the address of x
     cout<<endl<<*p; //bina x ke uski value access kar rhe h 
  
   return 0;
}