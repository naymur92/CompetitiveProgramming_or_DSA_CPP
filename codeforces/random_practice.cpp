#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> p(n);
	for (int i = 0; i < n; ++i) {
		cin >> p[i];
	}

	cout << min_element(p.begin(), p.end()) - p.begin();
}

int main() {
	/*int t;
	cin >> t;

	while (t--) {
		solve();
	}*/

	solve();
}