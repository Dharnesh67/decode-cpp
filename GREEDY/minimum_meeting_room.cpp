#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// class meet{
   
// public:
//     /**
//      * @param intervals: an array of meeting time intervals
//      * @return: the minimum number of conference rooms required
//      */
    
// };
int  minMeetingRooms(vector<vector<int>> &intervals) {
        // Write your code here
       vector<int>start;
       vector<int>ending;
    for (auto x: intervals)
    {
        start.push_back(x[0]);
        ending.push_back(x[1]);
    }
    sort(start.begin(),start.end());
    sort(ending.begin(),ending.end());
    int i =0,j=0;
    int room=0,ans=0;
    while(i<start.size() and j<ending.size()){
        if(start[i]<ending[j]){
            room++;
            i++;
            ans=max(ans,room);
        }
        else if(start[i]>ending[j]){
            room--;
            j++;
        }
        else {
            // equal case
            j++;
            i++;
        }
    }
    
    return ans;
    }
int main(){
    vector<vector<int>>intervals={{7,10},{15,20},{0,30},{1,40}};
    cout<<minMeetingRooms(intervals);
    
}