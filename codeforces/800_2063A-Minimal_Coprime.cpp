/*
https://codeforces.com/contest/2063/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int l, r;
	cin >> l >> r;

	if (l == r and l == 1) {
		cout << 1 << "\n";
		return;
	}

	int ans = r - l;

	cout << ans << "\n";
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}

/*
6
1 2
1 10
49 49
69 420
1 1
9982 44353

*/

/*
1
9
0
351
1
34371

*/