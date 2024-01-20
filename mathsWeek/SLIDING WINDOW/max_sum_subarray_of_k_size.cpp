#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int >a;
a={7,1,2,5,8,4,9,3,6};  // sliding window algorithmn
int maxs=0;
int sum=0;
int k;
cin>>k;
for (int i = 0; i < k; i++)  // TC =k
{
  sum +=a[i];
}
int i =1;
int j =k;
while(j<a.size()){
int current=sum+a[j]-a[i-1];
maxs=max(maxs,current) ; // TC  = n-k
i++;
j++;
sum =current; //changing previous sum;
}
cout<<maxs;
// total O(n)
return 0;
}