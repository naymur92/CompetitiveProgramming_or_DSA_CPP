/*
*/

#include <bits/stdc++.h>
using namespace std;

// constraints
const int N = 1e5 + 10;
const int INF = 1e9 + 10;

// graph
vector<pair<int, int> > g[N];

void dijkstra(int source) {
	// declare required arrays
	vector<int> isVisited(N, false);
	vector<int> dist(N, INF);

	set<pair<int, int> > st;

	// set initial value in set and dist
	st.insert({0, source});
	dist[source] = 0;

	while (st.size() > 0) {
		// get the top node and distance from set
		auto node = *st.begin();
		int v = node.second;
		int v_dist = node.first;

		st.erase(st.begin());
		if (isVisited[v]) continue;
		isVisited[v] = true;

		// iterate through all nodes of the top node
		for (auto child: g[v]) {
			int child_v = child.first;
			int child_dist = child.second;

			// if distance of child node is less than previous dist then change the distance
			if (dist[v] + child_dist < dist[child_v]) {
				dist[child_v] = dist[v] + child_dist;

				st.insert({dist[child_v], child_v});
			}
		}
	}

	// Print shortest distances from source
    for (int i = 1; i <= 6; ++i) {
        if (dist[i] == INF) cout << i << " => INF\n";
        else cout << i << " => " << dist[i] << "\n";
    }
}

int main() {
	int v;
	cin >> v;

	int n, m, wt;

	while (v--) {
		cin >> n >> m >> wt;

		g[n].push_back({m, wt});
		g[m].push_back({n, wt});
	}

	dijkstra(1);
}

/*
9
1 2 1
1 3 5
2 3 2
2 4 2
2 5 1
3 5 2
4 5 3
4 6 1
5 6 1
*/

/*
1 => 0
2 => 1
3 => 3
4 => 3
5 => 2
6 => 3
*/