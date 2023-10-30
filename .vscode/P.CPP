#include <iostream>
#include <vector>
using namespace std;

int f(vector<vector<int>>& v, int n, int m, int k, int b) {
    int sum = 0;
    int consecutiveBad = 0;  // Track consecutive "bad" coffees
    int i ,j;
    for (i = 0, j = 0; i < n && j < m;) {
        if (v[i][j] >= b) {
            sum += v[i][j];
            j++;
            consecutiveBad = 0;  // Reset consecutiveBad when a "good" coffee is bought
        } else if (consecutiveBad < k) {
            sum += v[i][j];
            j++;
            consecutiveBad++;
        } else {
            i++;
            j = 0;
            consecutiveBad = 0;
        }
    }

    return (i == n - 1 && j == m) ? sum : -1; // Check if we reached the lower-right corner
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, m, k, b;
        cin >> n >> m >> k >> b;
        vector<vector<int>> v(n, vector<int>(m));

        for (int j = 0; j < n; j++) {
            for (int l = 0; l < m; l++) {
                int x;
                cin >> x;
                v[j][l] = x;
            }
        }
        int result = f(v, n, m, k, b);
        if (result == -1) {
            cout << "IMPOSSIBLE" << endl;
        } else {
            cout << "Case " << i + 1 << ": " << result << endl;
        }
    }
    return 0;
}
