// class Solution {
// public:
//     string countAndSay(int n) {
//         if(n==1) return "1"; // lecture 4 recursion
//         // 3322251 -> 23 32 15 11
//         string str = countAndSay(n-1);
//         string ans="";
//         int count =0;
//         char ch = str[0];
//         for(int i =0;i<str.length();i++){
//             char dh=str[i];
//             if(ch==dh){
//                 count++;
//             }
//             else{
//                 ans+=(to_string(count)+ch);
//               count=1;  
//               ch=dh;            
//             }
//         }
//         ans+=(to_string(count)+ch);
//         return ans;
//     }
// };
