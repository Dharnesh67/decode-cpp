// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& a) {
//         int n =a.size(); // cyclic sorting 
//         int i =0;
//         vector<int>ans;
//         while(i<n){
//             int crct= a[i]-1;
//             if(crct==i || a[i] ==a[crct] ) i++;
//             else swap( a[i] ,a[crct] );
//         }
//         for(int  k=0;k< n ;k++){
//             if(a[k]!=k+1) ans.push_back(a[k]);
//         }
//         return ans;
//     }
// };