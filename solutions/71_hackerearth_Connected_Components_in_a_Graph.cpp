/*
https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
bool vis[N];
vector<int> graph[N];

void dfs(int vertex) {
	vis[vertex] = true;

	// cout << vertex << "\n";
	for (int child: graph[vertex]) {
		if (vis[child]) continue;

		// cout << "Parent: " << vertex << ", Child: " << child << "\n";

		dfs(child);
	}
}

int main() {
	int n, e;
	cin >> n >> e;

	for (int i = 0; i < e; ++i) {
		int x, y;
		cin >> x >> y;

		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	// dfs(1);
	int ct = 0;
	for (int i = 1; i <= n; ++i) {
		if (vis[i]) continue;
		dfs(i);
		ct++;
	}

	cout << ct << "\n";
}

/*
8 5
1 2
2 3
2 4
3 5
6 7
*/


/*
3
*/