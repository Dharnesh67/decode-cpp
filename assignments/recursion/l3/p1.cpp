#include <iostream>
#include <vector> // printing every k length sub sequence
using namespace std;
void rev(int n, int &p)
{
    if(n==0) {
        return;}
  int d =n%10;
    p=p*10 + d;
    rev(n/10,p);
}
int main()
{
    int k;
    cin >> k;
    int ans=0;
    rev(k,ans);
    cout<<ans;
}
