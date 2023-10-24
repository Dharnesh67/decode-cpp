#include <iostream>
using namespace std;
void fun(int x=1,int y=3){   // x=1 uski default value h 
cout<<x<<" "<<y;

}

int main()
{

    int a=3;
    int b = 4;
    fun(a,b); // a ki value x me jayegi or b ki value y me jayegi 


    return 0;
}