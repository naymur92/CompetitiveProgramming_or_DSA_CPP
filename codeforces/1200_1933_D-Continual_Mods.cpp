/*
https://codeforces.com/problemset/problem/1933/D
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int &num: a) cin >> num;

	sort(a.begin(), a.end());

	if (a[0] != a[1]) {
		cout << "YES\n";
		return;
	}

	bool is_possible = false;
	for (int i = 1; i < n; ++i) {
		if (a[i] % a[0] != 0) {
			is_possible = true;
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
8
6
1 2 3 4 5 6
5
3 3 3 3 3
3
2 2 3
5
1 1 2 3 7
3
1 2 2
3
1 1 2
6
5 2 10 10 10 2
4
3 6 9 3

*/

/*
YES
NO
YES
NO
YES
NO
YES
NO

*/