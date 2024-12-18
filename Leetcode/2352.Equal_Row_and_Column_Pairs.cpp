/*
https://leetcode.com/problems/equal-row-and-column-pairs/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

int equalPairs(vector<vector<int>>& grid) {
	map<vector<int>, int> mp;

	int n = grid.size();

	for (int i = 0; i < n; ++i) {
		mp[grid[i]]++;
	}

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		vector<int> temp;
		for (int j = 0; j < n; ++j) {
			temp.push_back(grid[j][i]);
		}

		ans += mp[temp];
	}

	return ans;
}

int main() {
	vector<vector<int>> grid = {{3,2,1},{1,7,6},{2,7,7}};

	cout << equalPairs(grid);
}