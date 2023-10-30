// #include <iostream>
// #include<vector>
// #include<algorithm>
// #include<numeric>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout << a + b;
//     int count=0;
//     for(int i =a;i<=b;i++){
//         vector<int>v(i);
//         int sum=0;
//         int l=0;
//         while(i!=0){
//             v[l]=i%10;
//             i/=10;
//         }
//         for(int j =0;j<v.size();j++) v[j]=(v[j]*v[j]);
//         sum=accumulate(v.begin(),v.end(),0);
//         if(sum==1){ count++;break;}
//         while((sum!=sum%10)) {
//          int k =0;
//         while(sum!=0){
//             v[k]=sum%10;
//             sum/=10;
//             i++;
//         }
//         sum=accumulate(v.begin(),v.end(),0);
//         if(sum==sum%10){
//             count++;
//         } 
//         }
//     }
//     cout<<count;
//     return 0;
// }
#include <iostream>
#include<vector>
using namespace std;
int f(vector<vector<int>>&v,int n,int m,int k,int b){
    int sum=v[0][0];
    int i =0,j=0;
    while(i<n and j<m){
            if((v[i][j+1]>=v[i+1][j]) and j<m-1) j++;
            else if(i<n-1) i++;
            if(v[i][j]<b and k>0){
                k--;
            } 
            sum+=v[i][j];
            if(j>=m-1) i++;
    }
    return sum;
}
int main() {
    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        int n,m,k,b;
        cin>>n>>m>>k>>b;
        vector<vector<int>>v;
        for(int j=0;j<n;j++){
            vector<int>d(m);
            for(int k=0;k<m;k++){
                int x;
                cin>>x;
                d.push_back(x);
            }
            v.push_back(d);
        }
        cout<<f(v,n,m,k,b);
        
    }
    return 0;
}

// 1
// 2 3 2 5
// 6 6 1
// 1 1 5