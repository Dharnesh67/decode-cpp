#include<iostream>
using namespace std ;
int  main (){
    int n ,a=1,b=1;
    cin>>n;
    int sum=0;

    for (int  i = 1; i <= n; i++)
    {
         cout<<b<<" ";
            sum=a+b;
            a=b;
            b=sum;
      
    }
    

return 0;
} 