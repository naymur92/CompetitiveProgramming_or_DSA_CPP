/*
https://leetcode.com/problems/nearest-exit-from-entrance-in-maze/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid (int i, int j, int m, int n) {
        return i >= 0 && j >= 0 && i < m && j < n;
    }

    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int dirx[4] = {1, -1, 0, 0};
        int diry[4] = {0, 0, 1, -1};

        int m = maze.size(), n = maze[0].size();

        queue<array<int, 3>> q;     // {i, j, steps}
        q.push({entrance[0], entrance[1], 0});

        while (!q.empty()) {
            auto [i, j, steps] = q.front();
            q.pop();

            // check entrance
            bool isTheEntrance = i == entrance[0] && j == entrance[1];
            // check border
            bool isBorder = i == 0 || j == 0 || i == m - 1 || j == n - 1;

            if (!isTheEntrance && isBorder) return steps;

            for (int k = 0; k < 4; ++k) {
                int new_i = i + dirx[k];
                int new_j = j + diry[k];

                if (isValid(new_i, new_j, m, n) && maze[new_i][new_j] == '.') {
                    maze[new_i][new_j] = '+';
                    q.push({new_i, new_j, steps + 1});
                }
            }
        }

        return - 1;
    }
};

int main() {
	
}