
// #include <iostream>
// #include <queue>
// using namespace std;
// //This is the main function
// int main()
// {
//     vector<int> v = {9,6,1,19,3,2,8,12,5};
//     int arr[] = {9,6,1,19,3,2,8,12,5};
//     priority_queue<int>maxhp;
//     priority_queue<int,vector<int>,greater<int>>minhp;
//     priority_queue<int,vector<int>,greater<int>>minhpvector(v.begin(),v.end());
//     priority_queue<int,vector<int>,greater<int>>minhparr(arr,arr+9);
//     minhp.push(10);
//     minhp.push(20);
//     minhp.push(30);
//     minhp.push(40);
//     minhp.push(50);
//     minhp.push(60);
//     minhp.push(70);
//     minhp.push(80);
//     cout<<minhp.top()<<endl;
//     cout<<minhpvector.top()<<endl;
//     cout<<minhparr.top()<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    struct cmp{
        bool operator()(vector<int>&a,vector<int>&b){
            return sqrt(a[0]*a[0]+a[1]*a[1])<sqrt(b[0]*b[0]+b[1]*b[1]);
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<int,vector<vector<int>>,cmp>pq;
        for(int i =0;i<points.size();i++){
            pq.push(points[i]);
        }
        vector<vector<int>>ans;
        while(k>0){
            ans.push_back(pq.top());
            pq.pop();
            k--;
        }
        return ans;
    }
};
int main(){

}