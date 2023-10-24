// // k closest elements 
// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {  // O(k + logn) // log n se search +k
//         // target == x
//         // k  number of elements
//         //|a - x| < |b - x|, or   a nad b are lower and upper bound
//         //|a - x| == |b - x| and a < b
//         vector<int>v(k);
//         int a = arr.size();
//         if(x<arr[0]){  // first case element is not in array or less than first element
//             for(int i =0; i<k;i++){
//                 v[i]=arr[i];
//             }
//             return v; // first two are for when x is not in array bound
//         }
//         if(x>arr[a-1]){   // last wale se bahar h 
//            int i = a-1; // last inndex
//            int j = k-1;
//            while(j>=0){
//                v[j]=arr[i];
//                j--;
//                i--;
//            }
//            return v;
//         }
//          // now for x present in array or not
//          int lo =0;
//          int hi= a-1;
//          int t =0;
//          bool flag = false; // check index 
//          int mid =-1; // lower bound and upper bound
//          while(lo<=hi){
//             mid = lo+(hi -lo)/2;
//             if(arr[mid]==x){
//                //present t is diferent from zero the element is present
//                 v[t]= arr[mid]; 
//                 t++;
//                 flag = true;
//                 break;
//             }
//             else if(arr[mid]>x) hi = mid -1;
//             else lo = mid+1;
//          }
//            int lb = hi;
//            int  upb = lo;
//          if(flag ==true){
//              lb = mid-1;
//              upb = mid+1; // jab element nahi mila
//          }
//          while(t<k && lb>=0 && upb <=a-1){
//             int d1 = abs(x-arr[lb]);
//             int d2 = abs(x-arr[upb]); // difference
//             if(d1<=d2){
//                 v[t]=arr[lb];
//                 lb--;
//             }
//             else{ //d1<d2
//                 v[t]=arr[upb];
//                 upb++;
//             }
//             t++;
//          }
//          if(lb<0){
//              while(t<k){
//                  v[t]=arr[upb];
//                  upb++;
//                  t++;
//              }
//          }
//          if(upb>a-1){
//              while(t<k){
//                  v[t]=arr[lb];
//                  lb--;
//                  t++;
//              }
//          }
// sort(v.begin(),v.end());
// if(v[0]==-1) {v[0]=-2;}
// return v;
//     }
// };