/*
https://leetcode.com/problems/flood-fill/description/
*/

#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>>& image, int sourceColor, int color) {
	int n = image.size();
	int m = image[0].size();

	if (i < 0 || i >= n) return;
	if (j < 0 || j >= m) return;
	if (image[i][j] != sourceColor) return;

	image[i][j] = color;

	dfs(i + 1, j, image, sourceColor, color);
	dfs(i - 1, j, image, sourceColor, color);
	dfs(i, j + 1, image, sourceColor, color);
	dfs(i, j - 1, image, sourceColor, color);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
	int sourceColor = image[sr][sc];
	if (sourceColor != color) dfs(sr, sc, image, sourceColor, color);

	return image;
}

int main() {
	
}