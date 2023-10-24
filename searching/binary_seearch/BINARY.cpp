// class Solution {
// public:
//     int search(vector<int>& n, int target) {
//         int lo =0 ,hi=n.size()-1;
        
//         while(lo<=hi){
//             int mid = (lo+hi)/2;// also mid = lo +(hi-lo)/2  leet code 704
//             if(n[mid]==target){
//                 return mid;
//                 break;
//             }
//             else if(n[mid]<target){
//                 lo=mid+1;
//             }
//             else/*(n[mid]>target)*/{
//                 hi = mid-1;
//             }
//         }
//         return -1;
//     }
// };
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int search(vector<int>& n, int target) {
        int lo =0 ,hi=n.size()-1;
        
        while(lo<=hi){
            int mid = (lo+hi)/2;// also mid = lo +(hi-lo)/2  leet code 704
            if(n[mid]==target){
                return true;
                break;
            }
            else if(n[mid]<target){
                lo=mid+1;
            }
            else/*(n[mid]>target)*/{
                hi = mid-1;
            }
        }
        return false;
    }
int main(){
   vector<int>v;
   v={1,2,3,4,4,5,3,5,3,7,6,8};
   sort(v.begin(),v.end()); //only works for sorted array
   cout<<search(v,7);
   

    return 0;
}

