#include<bits/stdc++.h>
using namespace std;
int countSetBitsUtil(unsigned int x,int k=)
{
    if (x <= 0)
        return 0;
    return (x % 2 == 0 and x%k==0? 0 : 1) + countSetBitsUtil(x / 2);
}
int countSetBits(unsigned int n)
{
    int bitCount = 0; // initialize the result
 
    for (int i = 1; i <= n; i++)
        bitCount += countSetBitsUtil(i);
 
    return bitCount;
}
int main(){
cout<<countSetBitsUtil(5);
}