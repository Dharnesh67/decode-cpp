// leet code 852
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; // mountain array
int main(){
vector<int>arr;
arr={1, 2, 3, 4, 9, 8, 7, 6, 5};
  int lo=0,hi =arr.size()-1;
        while(lo<=hi){
            int mid =lo+(hi-lo)/2;
            if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                cout<<mid;
                break;
            }
            else if (arr[mid]>arr[mid+1])
            {
                hi =mid-1;
            }
            else {
                lo =mid+1;
            }
            
            }
    return 0;
}