#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
const int M = 1e9 + 7;

vector<int> tree[N];
vector<int> subtree_sum(N);

void dfs(int node, int parent = 0) {

	// for subtree sum
	subtree_sum[node] += node;

	for (int child: tree[node]) {
		if (child == parent) continue;

		dfs(child, node);

		subtree_sum[node] += subtree_sum[child];
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

	long long ans = 0;
	for (int i = 2; i <= n; ++i) {
		int part1 = subtree_sum[i];
		int part2 = subtree_sum[1] - part1;

		ans = max(ans, (part1 * 1LL * part2) % M);
	}

	cout << ans << "\n";
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