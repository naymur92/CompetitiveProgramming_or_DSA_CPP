/*
https://leetcode.com/problems/set-matrix-zeroes/description/
*/

#include <bits/stdc++.h>

using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    /*vector<pair<int, int>> indxs;

    int m = matrix.size();
    int n = matrix[0].size();

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 0) indxs.push_back({i, j});
        }
    }

    for (auto &indx: indxs) {
        int row = indx.first;
        int col = indx.second;

        for (int i = 0; i < n; ++i) {
            matrix[row][i] = 0;
        }
        for (int i = 0; i < m; ++i) {
            matrix[i][col] = 0;
        }
    }*/

    int m = matrix.size();
    int n = matrix[0].size();

    unordered_set<int> rows;
    unordered_set<int> cols;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 0) {
                rows.insert(i);
                cols.insert(j);
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (rows.count(i) > 0 || cols.count(j) > 0) {
                matrix[i][j] = 0;
            }
        }
    }
}

void solve() {
    vector<vector<int>> matrix = {{0,1,2,0}, {3,4,5,2}, {1,3,1,5}};

    /*for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";*/

    setZeroes(matrix);

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    solve();
}