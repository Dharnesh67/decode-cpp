#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        if(s.length()<a.length() || s.length()<b.length()){
            return {};
        }
        vector<int> idx;
        unordered_map<int, string> m;
        for (int i = 0; i <= s.length() - a.length(); i++) {
            if (s.substr(i, a.length()) == a) {
                idx.push_back(i);
            }
        }
        for (int i = 0; i <= s.length() - b.length(); i++) {
            if (s.substr(i, b.length()) == b) {
                m[i] = b;
            }
        }
        idx.erase(remove_if(idx.begin(), idx.end(), [&](int i) {
            for (auto x : m) {
                if (abs(x.first - i) <= k) {
                    return false;
                }
            }
            return true;
        }), idx.end());
        return idx;
    }
};
int main(){

}