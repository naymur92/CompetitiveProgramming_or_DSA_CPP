/*
https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-campers/
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int parent[N];
int t_size[N];
multiset<int> sizes;

void make(int v) {
	parent[v] = v;
	t_size[v] = 1;
	sizes.insert(1);
}

int find(int v) {
	if (parent[v] == v) return v;

	return parent[v] = find(parent[v]);
}

void merge(int sz_1, int sz_2) {
	sizes.erase(sizes.find(sz_1));
	sizes.erase(sizes.find(sz_2));

	sizes.insert(sz_1 + sz_2);
}

void Union(int a, int b) {
	a = find(a);
	b = find(b);

	if (a != b) {
		if (t_size[a] < t_size[b]) swap(a, b);

		parent[b] = a;
		merge(t_size[a], t_size[b]);
		t_size[a] += t_size[b];
	}
}

int main() {
	int n, q;
	cin >> n >> q;

	for (int i = 1; i <= n; ++i) {
		make(i);
	}

	while (q--) {
		int u, v;
		cin >> u >> v;

		Union(u, v);

		if (sizes.size() == 1) {
			cout << 0 << "\n";
		} else {
			int mn = *(sizes.begin());
			int mx = *(--sizes.end());

			cout << mx - mn << "\n";
		}
	}
}

/*
2 1
1 2
*/

/*
0
*/