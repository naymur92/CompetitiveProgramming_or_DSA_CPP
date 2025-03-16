/*
https://leetcode.com/problems/rotting-oranges/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid (int i, int j, int m, int n) {
        return i >= 0 && j >= 0 && i < m && j < n;
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int dirx[4] = {1, -1, 0, 0};
        int diry[4] = {0, 0, 1, -1};

        int m = grid.size(), n = grid[0].size();

        queue<vector<pair<int, int>>> q;
        vector<pair<int, int>> temp;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 2) temp.push_back({i, j});
            }
        }
        q.push(temp);

        int minutes = 0;

        while (!q.empty()) {
            auto curr = q.front();
            q.pop();

            vector<pair<int, int>> temp;

            for (auto &node: curr) {
                for (int k = 0; k < 4; ++k) {
                    int new_i = node.first + dirx[k];
                    int new_j = node.second + diry[k];

                    if (isValid(new_i, new_j, m, n) && grid[new_i][new_j] == 1) {
                        grid[new_i][new_j] = 2;
                        temp.push_back({new_i, new_j});
                    }
                }
            }

            
            if (temp.size() > 0) {
                minutes++;
                q.push(temp);
            }
        }

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) minutes = -1;
            }
        }

        return minutes;
    }
};

int main() {
	
}