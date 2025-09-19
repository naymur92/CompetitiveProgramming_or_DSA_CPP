/*
https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int total = 0;

        int n = grid.size(), m, l, r, mid;
        for (int i = 0; i < n; ++i) {
            m = grid[i].size();
            l = -1, r = m;

            while (r - l > 1) {
                mid = l + (r - l + 1) / 2;
                if (grid[i][mid] >= 0) l = mid;
                else r = mid;
            }

            // cout << l << " " << r << "\n";
            total += (m - 1 - l);
        }

        return total;
    }
};

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}