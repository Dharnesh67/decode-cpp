#include <bits/stdc++.h>
using namespace std;
struct pair_hash {
    template <class T1, class T2>
    size_t operator () (const pair<T1,T2> &p) const {
        auto h1 = hash<T1>{}(p.first);
        auto h2 = hash<T2>{}(p.second); 

        return h1 ^ h2;  
    }
};
unordered_set<pair<int, int>,pair_hash> visited;
vector<vector<char>> v;

bool canVisit(int i, int j) {
    if (i == v.size() - 1 and j == v[0].size() - 1)
        return true;
    if (i < 0 or j < 0 or i >= v.size() or j >= v[0].size() or visited.count({i, j}))
        return false;
    visited.insert({i, j});
    if (v[i][j] == 'R') {
        return canVisit(i, j + 1);
    } else if (v[i][j] == 'L') {
        return canVisit(i, j - 1);
    } else if (v[i][j] == 'D') {
        return canVisit(i + 1, j);
    } else if (v[i][j] == 'U') {
        return canVisit(i - 1, j);
    }
    return false;  // Added for completeness
}

int main() {
    int n, m;
    cin >> n >> m;
    v.resize(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            v[i][j] = s[j];
        }
    }

    if (canVisit(0, 0))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
