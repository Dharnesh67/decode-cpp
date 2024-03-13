#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool safe(vector<vector<char>>& g, int r, int c, int k) {
        for (int i = 0; i < 9; i++) {
            if (g[i][c] == k + '0' ||
                g[r][i] == k + '0') // Check row and column
                return false;
        }
        int startRow = r - r % 3,
            startCol = c - c % 3; // Find top-left position of 3x3 box
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (g[i + startRow][j + startCol] == k + '0') // Check 3x3 box
                    return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& g, int r, int c) {
        if (r ==9) {
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    cout<<g[i][j]<<" ";
                }
                cout<<endl;
            }
            return true;
        }
        if (c == 9) {
            return solve(g, r + 1, 0);
        }
        if (g[r][c] != '.') {
            return solve(g, r, c + 1);
        }
        for (int i = 1; i <= 9; i++) {
            if (safe(g, r, c, i)) {
                g[r][c] = '0' + i;
                bool b = solve(g, r, c + 1);
                if (b) return true;
                g[r][c] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) { solve(board, 0, 0); }
};
int main(){
    Solution s;
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    s.solveSudoku(board);
    return 0;
}