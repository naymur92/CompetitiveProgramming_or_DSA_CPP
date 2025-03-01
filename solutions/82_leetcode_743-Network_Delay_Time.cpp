/*
https://leetcode.com/problems/network-delay-time/description/
*/

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 10;
const int N = 1e5 + 10;

int dijkstra(int source, int n, vector<vector<pair<int, int>>> &g) {
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

	/*for (int i = 1; i <= n; ++i) {
		if (i == source) continue;

		if (dist[i] == INF) cout << i << " => INF\n";
        else cout << i << " => " << dist[i] << "\n";
	}*/

	int ans = -1;
	for (int i = 1; i <= n; ++i) {
		if (i == source) continue;

		if (dist[i] == INF) return - 1;
        else ans = max(dist[i], ans);
	}

	return ans;
}

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
	vector<vector<pair<int, int>>> g(N);
	
	for (auto path: times) {
		g[path[0]].push_back({path[1], path[2]});
		// g[path[1]].push_back({path[0], path[2]});
	}

	/*for (int i = 0; i < 3; ++i) {
		cout << times[i][0] << " " << times[i][1] << " " << times[i][2] << "\n";
	}
	return -1;*/

	return dijkstra(k, n, g);
}

int main() {
	int n, k;
	cin >> n >> k;	

	int c;
	cin >> c;

	vector<vector<int>> times(c);

	int u, v, w;

	for (int i = 0; i < c; ++i) {
		cin >> u >> v >> w;
		times[i].push_back(u);
		times[i].push_back(v);
		times[i].push_back(w);
	}

	/*for (int i = 0; i < c; ++i) {
		cout << times[i][0] << " " << times[i][1] << " " << times[i][2] << "\n";
	}*/

	cout << networkDelayTime(times, n, k);
}

/*
4 2
3
2 1 1
2 3 1
3 4 1
*/

/*

*/