/*
* @lc app=leetcode id=130 lang=cpp
* [130] Surrounded Regions
* https://leetcode.com/problems/surrounded-regions
* Sun Feb 01 2026, 12:03:27 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
private:
    int m, n;
    vector<vector<bool>> visited;
    
    void propagate(vector<vector<char>>& board, int y, int x) {
        if (y < 0 || y >= m || x < 0 || x >= n || visited[y][x] || board[y][x] != 'O')
            return;

        visited[y][x] = true;

        propagate(board, y+1, x);
        propagate(board, y-1, x);
        propagate(board, y, x+1);
        propagate(board, y, x-1);
    }
    
public:
    void solve(vector<vector<char>>& board) {
        m = board.size(), n = board[0].size();
        if (m == 1 || n == 1) return;
        
        visited = vector<vector<bool>>(m, vector<bool>(n));
        
        // leftmost and rightmost columns
        for (int i = 0; i < m; ++i)
            for (int j : {0, n-1})
                if (board[i][j] == 'O')
                    propagate(board, i, j);
        
        // top and bottom rows
        for (int j = 0; j < n; ++j)
            for (int i : {0, m-1})
                if (board[i][j] == 'O')
                    propagate(board, i, j);

        // swap unvisited 'O' to 'X'
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (!visited[i][j])
                    board[i][j] = 'X';
    }
};
// @lc code=end

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<vector<char>> board = {{'X','X','X','X'},{'X','O','O','X'},{'X','X','O','X'},{'X','O','X','X'}};
    
    Solution sol;
    sol.solve(board);

    for (auto row : board) {
        for (auto cell : row) {
            cout << cell << ' ';
        }
        cout << '\n';
    }

    return 0;
}
