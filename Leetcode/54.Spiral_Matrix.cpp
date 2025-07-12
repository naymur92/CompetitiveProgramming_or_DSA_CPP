/*
https://leetcode.com/problems/spiral-matrix/description/
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> output;

    int top = 0, left = 0, right = n, bottom = m;

    while (top < bottom || left < right) {
        for (int i = left; i < right && top < bottom; i++) {
            output.push_back(matrix[top][i]);
            // cout << "top \n";
        }
        top++;

        for (int i = top; i < bottom && left < right; i++) {
            output.push_back(matrix[i][right - 1]);
            // cout << "right \n";
        }
        right--;

        for (int i = right - 1; i >= left && top < bottom; i--) {
            output.push_back(matrix[bottom - 1][i]);
            // cout << "bottom \n";
        }
        bottom--;

        for (int i = bottom - 1; i >= top && left < right; i--) {
            output.push_back(matrix[i][left]);
            // cout << "left \n";
        }
        left++;
    }

    return output;
}

void solve() {
    vector<vector<int>> matrix = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    /*for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";*/

    vector<int> ans = spiralOrder(matrix);

    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    solve();
}