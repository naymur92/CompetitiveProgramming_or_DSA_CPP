#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<int> tree[N];
vector<int> height(N), depth(N);

void dfs(int node, int parent = 0) {

	for (int child: tree[node]) {
		if (child == parent) continue;

		depth[child] = depth[node] + 1;
		dfs(child, node);
		height[node] = max(height[node], height[child]) + 1;
	}
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n - 1; ++i) {
		int x, y;
		cin >> x >> y;

		tree[x].push_back(y);
		tree[y].push_back(x);
	}

	dfs(1);

	for (int i = 1; i <= n; ++i) {
		cout << depth[i] << " " << height[i] << "\n";
	}
}

/*
13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11
*/


/*


*/