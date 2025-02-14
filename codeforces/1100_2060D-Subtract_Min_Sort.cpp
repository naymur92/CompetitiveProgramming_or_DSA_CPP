/*
https://codeforces.com/problemset/problem/2060/D
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> a(n);

	for (auto &ai: a) cin >> ai;

	for (int i = 0; i < n - 1; ++i) {
		int sub = min(a[i], a[i + 1]);
		a[i] -= sub;
		a[i + 1] -= sub;
	}

	bool is_possible = true;

	for (int i = 0; i < n - 1; ++i) {
		if (a[i] > a[i + 1]) {
			is_possible = false;
			break;
		}
	}

	cout << (is_possible ? "YES\n" : "NO\n");
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
5
5
1 2 3 4 5
4
4 3 2 1
4
4 5 2 3
8
4 5 4 5 4 5 4 5
9
9 9 8 2 4 4 3 5 3

*/

/*
YES
NO
YES
YES
NO

*/