/*
https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-flood-1/
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int parent[N];
int t_size[N];

void make(int v) {
	parent[v] = v;
	t_size[v] = 1;
}

int find(int v) {
	if (parent[v] == v) return v;

	return parent[v] = find(parent[v]);
}

void Union(int a, int b) {
	a = find(a);
	b = find(b);

	if (a != b) {
		if (t_size[a] < t_size[b]) swap(a, b);

		parent[b] = a;
		t_size[a] += t_size[b];
	}
}

int main() {
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; ++i) {
		make(i);
	}

	while (k--) {
		int u, v;
		cin >> u >> v;

		Union(u, v);
	}

	int conn_cmp_cnt = 0;
	for (int i = 1; i <= n; ++i) {
		if (parent[i] == i) conn_cmp_cnt++;
	}

	cout << conn_cmp_cnt << "\n";
}

/*
4
2
1 2
4 1

*/

/*
2
*/