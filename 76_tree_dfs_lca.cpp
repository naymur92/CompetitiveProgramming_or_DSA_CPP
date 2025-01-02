#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<int> tree[N];
vector<int> par(N);

void dfs(int node, int parent = -1) {
	par[node] = parent;
	for (int child: tree[node]) {
		if (child == parent) continue;

		dfs(child, node);
	}
}

vector<int> path(int node) {
	vector<int> ans;

	while (node != -1) {
		ans.push_back(node);
		node = par[node];
	}

	reverse(ans.begin(), ans.end());

	return ans;
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

	/*for (int i = 1; i <= n; ++i) {
		cout << par[i] << " \n"[i == n];
	}*/


	int x = 9, y = 11;

	vector<int> path_x = path(x);
	vector<int> path_y = path(y);

	int i = 0, lca;
	while (i < min(path_x.size(), path_y.size()) and path_x[i] == path_y[i]) {
		lca = path_x[i++];
	}

	cout << lca << "\n";
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