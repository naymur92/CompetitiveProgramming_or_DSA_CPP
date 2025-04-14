/*
https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-campers-2/
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int parent[N];
int t_size[N];

set<int> group_sizes;
int group_sz_cnt[N];

void make(int v) {
	parent[v] = v;
	t_size[v] = 1;
	group_sz_cnt[1]++;
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
		
		group_sz_cnt[t_size[a]]--;
		if (group_sz_cnt[t_size[a]] == 0) group_sizes.erase(t_size[a]);

		group_sz_cnt[t_size[b]]--;
		if (group_sz_cnt[t_size[b]] == 0) group_sizes.erase(t_size[b]);

		t_size[a] += t_size[b];

		group_sz_cnt[t_size[a]]++;
		if (group_sz_cnt[t_size[a]] == 1) group_sizes.insert(t_size[a]);
	}
}

int main() {
	int n, q;
	cin >> n >> q;

	for (int i = 1; i <= n; ++i) {
		make(i);
	}

	group_sizes.insert(1);

	while (q--) {
		int u, v;
		cin >> u >> v;

		Union(u, v);

		bool first = true;
		int prev = 0;
		int diff = INT_MAX;

		for (int curr: group_sizes) {
			if (group_sz_cnt[curr] > 1) {
				diff = 0;
				break;
			}
			if (!first) {
		        diff = min(diff, curr - prev);
		    } else {
		        first = false;
		    }
			prev = curr;
		}

		if (diff == INT_MAX) diff = 0;
		cout << diff << "\n";
	}
}

/*
2 1
1 2
*/

/*
0
*/