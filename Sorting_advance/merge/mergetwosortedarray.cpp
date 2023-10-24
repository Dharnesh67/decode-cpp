#include <iostream>
#include<vector>
using namespace std; // merge twoo sorted array 
vector<int> merge(vector<int>&a,vector<int>&b,vector<int>&c){
    int n =a.size();
   int m=b.size();
   int i=0;
   int j=0;
   int k =0;
   while( i <n &&j<m){
    if(a[i]<=b[j]){
        c[k] = a[i++]; 
    }
    else{
        c[k]=b[j++];
    }  k++;
   }
    if(i==n){ // a end ho chuka h 
       while(j<m){
         c[k++] = b[j++];
       }
    }
   if(j==m){ // b end ho chuka h 
      while(i<n){
         c[k++]=a[i++];
      }
    }
    return c;
}

int main()
{
   vector<int>a,b;
   a={1,2,3,4,5};
   b={6,7,8,9};
   int n =a.size();
   int m=b.size();
 vector<int>c(m+n);
 merge(a,b,c);
    for (int l = 0; l <c.size(); l++)
    {
        cout<<c[l]<<" ";
    }
}
