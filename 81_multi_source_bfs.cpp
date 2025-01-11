/*
https://www.codechef.com/SNCKPB17/problems/SNSOCIAL/?tab=statement
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
const int INF = 1e9 + 10;

int val[N][N];
int visited[N][N];
int level[N][N];

int n, m;

void reset() {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			visited[i][j] = 0;
			level[i][j] = INF;
		}
	}
}

vector<pair<int, int>> moves = {
	{0, 1}, {0, -1}, {1, 0}, {-1, 0},
	{1, 1}, {1, -1}, {-1, 1}, {-1, -1}
};

bool isValid(int x, int y) {
	return x >= 0 && x < n && y >= 0 && y < m;
}

int bfs() {
	int mx = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			mx = max(mx, val[i][j]);
		}
	}

	queue<pair<int, int>> q;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (mx == val[i][j]) {
				q.push({i, j});
				level[i][j] = 0;
				visited[i][j] = 1;
			}
		}
	}

	int ans = 0;

	while (!q.empty()) {
		auto curr = q.front();
		int x = curr.first, y = curr.second;

		q.pop();

		for (auto child: moves) {
			int childX = child.first + x;
			int childY = child.second + y;

			if (!isValid(childX, childY) || visited[childX][childY]) continue;

			q.push({childX, childY});

			visited[childX][childY] = 1;
			level[childX][childY] = level[x][y] + 1;

			ans = max(ans, level[childX][childY]);
		}
	}

	return ans;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cin >> n >> m;

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> val[i][j];
			}
		}

		reset();

		cout << bfs() << "\n";
	}
}

/*
3
2 2
1 1
1 1
2 2
1 1
1 2
3 4
1 2 1 2
1 1 1 2
1 1 2 2
*/

/*
0
1
2
*/