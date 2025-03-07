#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 1; i * i <= n; ++i) {
		if (n % i == 0) cnt += 2;
	}
	cout << cnt << "\n";
}

int main() {
	/*int t;
	cin >> t;

	while (t--) {
		solve();
	}*/

	solve();
}