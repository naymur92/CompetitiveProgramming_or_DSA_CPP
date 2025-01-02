#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<int> tree[N];
vector<int> subtree_sum(N);
vector<int> odd_count(N);
vector<int> even_count(N);

void dfs(int node, int parent = 0) {

	// for odd/even count
	if (node % 2 == 0) even_count[node]++;
	else odd_count[node]++;

	// for subtree sum
	subtree_sum[node] += node;

	for (int child: tree[node]) {
		if (child == parent) continue;

		dfs(child, node);

		subtree_sum[node] += subtree_sum[child];

		even_count[node] += even_count[child];
		odd_count[node] += odd_count[child];
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

	cout << "Subtree sum:\n";
	for (int i = 1; i <= n; ++i) {
		cout << i << " " << subtree_sum[i] << "\n";
	}

	cout << "Even count:\n";
	for (int i = 1; i <= n; ++i) {
		cout << i << " " << even_count[i] << "\n";
	}

	cout << "Odd count:\n";
	for (int i = 1; i <= n; ++i) {
		cout << i << " " << odd_count[i] << "\n";
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