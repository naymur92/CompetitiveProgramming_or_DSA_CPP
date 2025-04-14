/*
https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-fireman-vincent/
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
const int M = 1e9 + 7;

int parent[N];
int E[N];

void make(int v) {
	parent[v] = v;
}

int find(int v) {
	if (parent[v] == v) return v;

	return parent[v] = find(parent[v]);
}

void Union(int a, int b) {
	a = find(a);
	b = find(b);

	if (a != b) {
		if (E[a] > E[b]) swap(a, b);

		parent[b] = a;
		// E[a] += E[b];
	}
}

int main() {
	int n, k;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		make(i);
		cin >> E[i];
	}

	cin >> k;

	while (k--) {
		int u, v;
		cin >> u >> v;

		Union(u, v);
	}

	map<int, int> mp;
	for (int i = 1; i <= n; ++i) {
		int p = find(i);
		if (E[i] == E[p]) mp[p]++;
		// cout << E[p] << " \n"[i == n];
	}

	int ans = 1;
	for (auto &it: mp) {
		ans = (ans * it.second) % M;
		// cout << it.second << ", ";
	}
	cout << ans << "\n";
}

/*
4
3 3 3 3
2
1 2
4 1
*/

/*
3
*/