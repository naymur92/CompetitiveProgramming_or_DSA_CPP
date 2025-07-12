/*
https://leetcode.com/problems/toeplitz-matrix/description/
*/

#include <bits/stdc++.h>

using namespace std;

bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    int m =  matrix.size();
    int n = matrix[0].size();

    for (int i = 0; i < m; i++) {
        for (int j = i, k = 0; j < m - 1 && k < n - 1; j++, k++) {
            if (matrix[j][k] != matrix[j + 1][k + 1]) return false;
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0, k = i; j < m - 1 && k < n - 1; j++, k++) {
            if (matrix[j][k] != matrix[j + 1][k + 1]) return false;
        }
    }

    return true;
}

void solve() {
    vector<vector<int>> matrix = {{1,2,3,4}, {5,1,2,3}, {9,5,1,2}};

    /*for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";*/

    cout << boolalpha;
    cout << isToeplitzMatrix(matrix);
}

int main() {
    solve();
}