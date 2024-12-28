#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

bool vis[N];
vector<int> graph[N];

vector<vector<int>> connected_components;
vector<int> current_cc;

void dfs(int vertex) {
	vis[vertex] = true;

	current_cc.push_back(vertex);

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

	int ct = 0;
	for (int i = 1; i <= n; ++i) {
		if (vis[i]) continue;

		// clear current connected components
		current_cc.clear();

		dfs(i);

		// push current connected components to connected components
		connected_components.push_back(current_cc);

		ct++;
	}

	// print total connected components
	cout << ct << "\n";

	// printing all connected components
	for (auto &c_cc: connected_components) {
		for (int &vertex: c_cc) {
			cout << vertex << " ";
		}
		cout << "\n";
	}
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
1 2 3 5 4 
6 7 
8 

*/