/*
*/

#include <bits/stdc++.h>
using namespace std;

// constraints
const int N = 1e5 + 10;

int parent[N], sz[N];

void make(int v) {
	parent[v] = v;
	sz[v] = 1;
}

int find(int v) {
	if (parent[v] == v) return v;

	// path compression
	return parent[v] = find(parent[v]);
}

void Union(int a, int b) {
	a = find(a);
	b = find(b);

	if (a != b) {
		// union by size
		if (sz[a] < sz[b]) swap(a, b);

		parent[b] = a;
		sz[a] += sz[b];
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	vector<pair<int, pair<int, int> >> edges;

	for (int i = 0; i < m; ++i) {
		int wt, u, v;
		cin >> u >> v >> wt;
		edges.push_back({wt, {u, v}});
	}

	sort(edges.begin(), edges.end());

	for (int i = 1; i <= n; ++i) {
		make(i);
	}

	int total_cost = 0;
	for (auto &edge: edges) {
		int wt = edge.first;
		int u = edge.second.first;
		int v = edge.second.second;

		if (find(u) == find(v)) continue;

		Union(u, v);
		total_cost += wt;

		cout << u << " " << v << "\n";
	}
	cout << total_cost << "\n";
}

/*
6 9
5 4 9
1 4 1
5 1 4
4 3 5
4 2 3
1 2 2
3 2 3
3 6 8
2 6 7
*/

/*
1 4
1 2
3 2
5 1
2 6
17

*/