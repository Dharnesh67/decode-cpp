#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    bool cmp(vector<int>& a1, vector<int>& a2) {
        return a1[1] > a2[1];
    }

public:
    int maximumUnits(vector<vector<int>>& a, int T) {
        sort(a.begin(), a.end(), cmp);
        int ans = 0;
        for (int i = 0; i < a.size(); i++) { // Added a semicolon here
            if (a[i][0] <= T) {
                ans += (a[i][1] * a[i][0]);
                T -= a[i][0];
            } else {
                ans += (T * a[i][1]);
                T = 0;
            }
            if (T == 0) break;
        }
        return ans;
    }
};
int main(){
    return 0;
}
