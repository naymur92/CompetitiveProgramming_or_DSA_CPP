/*
https://leetcode.com/problems/valid-sudoku/description/
*/

#include <bits/stdc++.h>

using namespace std;

int getBit(int x, int k) {
    return (x >> k) & 1;
}

bool isValidSudoku(vector<vector<char>>& board) {
    int n = 9;
    vector<int> rows(n), cols(n), squares(n);

    for (int r = 0; r < n; ++r) {
        for (int c = 0; c < n; ++c) {
            if (board[r][c] == '.') continue;

            int val = board[r][c] - '0';
            int sqPos = (r / 3) * 3 + (c / 3);

            if (getBit(rows[r], val) || getBit(cols[c], val) || getBit(squares[sqPos], val)) return false;

            val = 1 << val;

            rows[r] |= val;
            cols[c] |= val;
            squares[sqPos] |= val;
        }
    }

    return true;
}

void solve() {
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    cout << isValidSudoku(board);
}

int main() {
    solve();
}