#include <iostream>
using namespace std;
int check(int a,int b ){ // program to find if number is power of 2 or not
    if (a==b)
       return true;
    else if(a<b) return false;
    return check(a,(2*b));
}
int main()
{
    int a;
    cin >> a;
    cout << check(a,1);
}