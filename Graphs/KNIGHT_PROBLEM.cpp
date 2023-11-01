#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <cmath>

using namespace std;

class Solution {
public:
    int minKnightMoves(int x, int y) {
        // Define possible moves a knight can make.
        vector<pair<int, int>> directions = {
            {-2, -1}, {-2, 1},
            {-1, -2}, {-1, 2},
            {1, -2}, {1, 2},
            {2, -1}, {2, 1}
        };
        
        // Convert the target coordinates to the positive quadrant.
        x = abs(x);
        y = abs(y);
        
        // Initialize a set to store visited positions.
        set<pair<int, int>> visited;
        
        // Initialize a queue for BFS.
        queue<pair<int, int>> q;
        q.push({0, 0});
        
        int steps = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                int curr_x = q.front().first;
                int curr_y = q.front().second;
                q.pop();
                
                if (curr_x == x && curr_y == y) {  //  same starting and ending point
                    return steps;
                }
                
                for (const auto& direction : directions) {
                    int new_x = curr_x + direction.first;
                    int new_y = curr_y + direction.second;
                    
                    // Ensure the new position is within the positive quadrant and not visited.
                    if (0 <= new_x && new_x <= x + 2 && 0 <= new_y && new_y <= y + 2 && visited.find({new_x, new_y}) == visited.end()) {
                        visited.insert({new_x, new_y});
                        q.push({new_x, new_y});
                    }
                }
            }
            
            steps++;
        }
        
        return -1;  // Return -1 if no valid path is found.
    }
};

int main() {
    Solution solution;
    int result = solution.minKnightMoves(2, 1);
    cout << result << endl;  // Output: 4
    return 0;
}
