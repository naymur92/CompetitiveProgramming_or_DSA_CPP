/*
https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-soldiers/
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int parent[N];
// int t_size[N];

void make(int v) {
	parent[v] = v;
	// t_size[v] = 1;
}

int find(int v) {
	if (parent[v] == v) return v;

	return parent[v] = find(parent[v]);
}

void Union(int a, int b) {
	a = find(a);
	b = find(b);

	if (a != b) {
		// if (t_size[a] > t_size[b]) swap(a, b);

		parent[a] = b;
		// t_size[a] += t_size[b];
	}
}

int main() {
	int n, q;
	cin >> n >> q;

	for (int i = 1; i <= n; ++i) {
		make(i);
	}

	while (q--) {
		int t, u, v;
		cin >> t;

		if (t == 1) {
			cin >> u >> v;
			Union(u, v);
		} else if (t == 2) {
			cin >> u;
			int v = find(u);
			parent[v] = u;
			parent[u] = u;
		} else {
			cin >> u;
			cout << find(u) << "\n";
		}
		
	}
}

/*
2 2
1 1 2
3 1
*/

/*
2
*/