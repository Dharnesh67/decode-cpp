#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int f(vector<int> &v) {
    int n = v.size();
    vector<int> s(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[j] > v[i]) {
                s[i]++;
            } else {
                break; // No one taller than v[i] in front of them.
            }
        }
    }
    int result = accumulate(s.begin(), s.end(), 0);
    return result+1;
}

int main() {
    int n, h, a, c, q;
    cin >> n >> h >> a >> c >> q;
    vector<int> v(n);
    v[0] = h;

    for (int i = 1; i < n; i++) {
        v[i] = ((a * v[i - 1]) + c) % q;
    }

    cout << f(v);
    return 0;
}
// 5 2012 37 31 2573