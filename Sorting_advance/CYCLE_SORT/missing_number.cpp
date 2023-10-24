//  class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         vector<int>c(nums.size()+1,0);
//         for(int i=0;i<nums.size();i++){
//             c[nums[i]]=1;
//         }
//         int idx=-1;
//           for(int i=0;i<nums.size()+1;i++){
//              if(c[i]==0) {idx=i;
//              break;}
//         }
//         return idx;
//     }
// };