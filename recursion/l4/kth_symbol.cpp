#include <iostream> // agr zero h to 01 banao or 1 h to 10 banao
#include <vector>   // leet 779 // l4 >> 2:46
using namespace std;
int kthsymbol(int n,int k) // refer to copy 
{   
  if(k<=n){
      if (n==1) // row
    {   return 0;
    }
    if (k%2==0)
    { // even me fip
       int ans=kthsymbol(n-1,k/2);
       if(ans==0) return 1;
       else return 0;
    }
    else if (k%2!= 0)
    { // odd me same
       return kthsymbol(n-1,k/2+1);
    }
  }
  else return -1;
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<kthsymbol(n,k);
}
