/*
https://leetcode.com/problems/flood-fill/description/
*/

#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<char>>& grid, int n, int m) {
	if (i < 0 || i >= n) return;
	if (j < 0 || j >= m) return;
	if (grid[i][j] != '1') return;

	grid[i][j] = '.';

	dfs(i + 1, j, grid, n, m);
	dfs(i - 1, j, grid, n, m);
	dfs(i, j + 1, grid, n, m);
	dfs(i, j - 1, grid, n, m);
}

int numIslands(vector<vector<char>>& grid) {
	int n = grid.size();
	int m = grid[0].size();

	int ct = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (grid[i][j] == '1') {
				dfs(i, j, grid, n, m);
				ct++;
			}
		}
	}

	return ct;
}

int main() {
	
}