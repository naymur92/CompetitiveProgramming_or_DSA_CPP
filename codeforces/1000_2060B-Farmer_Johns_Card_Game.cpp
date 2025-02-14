/*
https://codeforces.com/problemset/problem/2060/B
*/

#include <bits/stdc++.h>

using namespace std;

bool checkArray(vector<int> &a, vector<int> &b) {
	for (int i = 0; i < a.size(); ++i) {
		if (b[i] - a[i] != 1) return false;
	}
	return true;
}

void solve() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> a(n, vector<int>(m));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}

	// sort(a.begin(), a.end());

	for (int i = 0; i < n; ++i) {
		sort(a[i].begin(), a[i].end());
	}

	vector<pair<int, int>> seq;
	for (int i = 0; i < n; ++i) {
		seq.push_back({i + 1, a[i][0]});
	}
	sort(seq.begin(), seq.end(), [](const pair<int, int> &a, const pair<int, int> &b){
		return a.second < b.second;
	});

	/*for (auto &it: seq) {
		cout << it.first << " => " << it.second << "\n";
	}
	cout << "\n";*/

	/*for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";*/

	bool is_possible = true;
	for (int i = 0; i < n - 1; ++i) {
		if (!checkArray(a[seq[i].first - 1], a[seq[i + 1].first - 1])) {
			is_possible = false;
			break;
		}
	}
	// cout << "\n";

	if (!is_possible) {
		cout << -1 << "\n";
		return;
	}

	for (auto &it: seq) {
		cout << it.first << " ";
	}
	cout << "\n";
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
4
2 3
0 4 2
1 5 3
1 1
0
2 2
1 2
0 3
4 1
1
2
0
3

*/

/*
1 2
1
-1
3 1 2 4

*/