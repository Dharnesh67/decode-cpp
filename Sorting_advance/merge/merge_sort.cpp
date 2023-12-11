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
void mergesort(vector<int>&v){
    int n =v.size(),n1=n/2,n2=(n-n/2);
    if(n==1) return ; //base case for recursion
    vector<int>a(n1),b(n2); //a = phle n/2 elements
    ///copy paste
    for (int i = 0; i <n1; i++)
    {
        a[i] =v[i];
        
    }
    for(int i = 0;i<n2;i++){
        b[i]=v[i+n1];
    }
    // magic for sorting on a and b  using recursion;
    mergesort(a);
    mergesort(b);
    // now merge a and b;  // merge two sorted array
    merge(a,b,v); // original sorting is happening here
    a.clear();
    b.clear();  //  for improving space complexity
}
int main()
{
   vector<int>v;
   v={5,6,7,3,4,5,2,4,2,1};
   int n =v.size();
    mergesort(v);
    for (int l = 0; l <v.size(); l++)
    {
        cout<<v[l]<<" ";
    }
}
