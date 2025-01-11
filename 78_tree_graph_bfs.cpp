#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
const int M = 1e9 + 7;

vector<int> g[N];
int level[N];
int visited[N];

void bfs(int source) {
	queue<int> q;
	q.push(source);
	visited[source] = 1;

	while (!q.empty()) {
		int curr = q.front();
		q.pop();

		cout << curr << " ";

		for (int child: g[curr]) {
			if (visited[child] != 1) {
				q.push(child);
				visited[child] = 1;
				level[child] = level[curr] + 1;
			}
		}
	}
}


int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n - 1; ++i) {
		int x, y;
		cin >> x >> y;

		g[x].push_back(y);
		g[y].push_back(x);
	}

	bfs(1);

	cout << "\n";

	for (int i = 1; i < n; ++i) {
		cout << i << ": " << level[i] << "\n";
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