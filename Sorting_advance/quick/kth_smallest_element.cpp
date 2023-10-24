#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
// void selection(vector<int>&a,int k){
// for (int i = 0; i <k; i++)
// {
//     int min =INT_MAX,index=-1;
//     for (int j =i; j<a.size(); j++)
//     {
//         if(a[j]<min){
//             min =a[j];
//             index=j;
//         }
//     }
//     swap(a[i],a[index]);
    
// }
// return;
// }
int partition(vector<int>&a,int si ,int ei){
    int count =0;
    int pivot=a[si];
    for (int i =si; i <=ei; i++) // quick select algorithm
    {
        if(pivot>a[i] ) count++; 
    }
    int pidx =count +si;
    swap(a[pidx],a[si]);
    int i =si,j=ei;
    while(i<=j){
         if(a[i]<=pivot) i++;
         if(a[j]>pivot) j--;
         else if(a[i]>pivot && a[j] <pivot){
            swap(a[i],a[j]);
            i++;
            j--;
         }
    }
    return pidx;
}
int quickselect(vector<int>&a,int si,int ei,int k){
      int pi =partition(a,si,ei);
      if(k==pi+1) {
      return a[pi];}
      else if(k<pi+1){
            quickselect(a,si,pi-1,k);
      }
      else /*if(k>pi)*/{
                    quickselect(a,pi+1,ei,k);
      }
}
int main(){
    int k =4;
vector<int>a;
a={5,1,8,2,7,6,3,-4,-8};  // kth largest is n-k smallest
cout<<quickselect(a,0,a.size()-1,k);
 return 0;
}