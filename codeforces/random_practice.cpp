#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> h(n);
	for (int i = 0; i < n; ++i) {
		cin >> h[i];
	}

	int cnt = 0;
	for (int i = 1; i < n - 1; ++i) {
		if (h[i] > h[i - 1] && h[i] > h[i + 1]) {
			cnt++;
			// cout << h[i] << " ";

			i += 2;
		}
	}
	// cout << "\n";

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