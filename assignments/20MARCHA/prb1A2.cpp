#include<iostream>
using namespace std ;
int  main (){
int amount;
cout<<"ENTER THE AMOUNT>>";
cin>>amount;
float n1,n2,n5,n10,n20,n50,n100,n500;
n1=n2=n5=n10=n20=n50=n100=n500=0;
switch (amount>500)
{
case 1:
n500=n500+(amount/500);
amount =amount-(n500*500);
cout<<n500;
    break;

default:
    break;
}

return 0;
}