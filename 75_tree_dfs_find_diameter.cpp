#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<int> tree[N];
vector<int> depth(N);

void dfs(int node, int parent = 0) {

	for (int child: tree[node]) {
		if (child == parent) continue;

		depth[child] = depth[node] + 1;

		dfs(child, node);
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

	int max_depth = -1;
	int max_depth_node;
	for (int i = 1; i <= n; ++i) {
		if (max_depth < depth[i]) {
			max_depth = depth[i];
			max_depth_node = i;
		}

		// reseting
		depth[i] = 0;
	}

	dfs(max_depth_node);

	max_depth = -1;
	for (int i = 1; i <= n; ++i) {
		max_depth = max(max_depth, depth[i]);
	}

	cout << max_depth << "\n";
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