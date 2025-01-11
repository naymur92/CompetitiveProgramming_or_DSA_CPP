/*
https://www.spoj.com/problems/NAKANJ/
*/

#include <bits/stdc++.h>
using namespace std;

int visited[8][8];
int depth[8][8];

int getX(string s) {
	return s[0] - 'a';
}

int getY(string s) {
	return s[1] - '1';
}

void reset() {
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			visited[i][j] = 0;
			depth[i][j] = 0;
		}
	}
}

vector<pair<int, int>> moves = {
	{1, 2}, {2, 1}, {-1, 2}, {-2, 1},
	{1, -2}, {2, -1}, {-1, -2}, {-2, -1}
};

bool isValid(int x, int y) {
	return x >= 0 && x < 8 && y >= 0 && y < 8;
}

void bfs(string src, string dest) {
	int srcX = getX(src);
	int srcY = getY(src);
	int destX = getX(dest);
	int destY = getY(dest);

	queue<pair<int, int>> q;

	q.push({srcX, srcY});
	visited[srcX][srcY] = 1;

	while (!q.empty()) {
		auto curr = q.front();
		int x = curr.first, y = curr.second;

		q.pop();

		for (auto child: moves) {
			int childX = child.first + x;
			int childY = child.second + y;

			if (isValid(childX, childY) && !visited[childX][childY]) {
				q.push({childX, childY});

				visited[childX][childY] = 1;
				depth[childX][childY] = depth[x][y] + 1;
			}
		}
		if (depth[destX][destY] != 0) break;
	}

	cout << depth[destX][destY] << "\n";
}

int main() {
	int n;
	cin >> n;

	while (n--) {
		string s, t;
		cin >> s >> t;

		reset();

		bfs(s, t);
	}
}

/*
3
a1 h8
a1 c2
h8 c3
*/

/*
6
1
4
*/