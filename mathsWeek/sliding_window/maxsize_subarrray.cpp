#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a;
int maxs =0;
    int k ;
    cin>>k;
    int sum=0;
     a={7,1,2,5,8,4,9,3,6};
     for (int i = 0; i <k; i++)
     {
        sum+=a[i];
     }
     int i =1;
     int j =k;
     maxs=sum;
     while(j<a.size()){
        int nextsum = sum+a[j]-a[i-1];
        if(maxs<nextsum) maxs =nextsum;
        i++;
        j++;
        sum =nextsum;
     }
     cout<<maxs;
     
}