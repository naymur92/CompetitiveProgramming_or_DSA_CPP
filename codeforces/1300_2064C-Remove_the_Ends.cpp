/*
https://codeforces.com/contest/2064/problem/C
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	vector<long long> pref(n);
	vector<long long> suff(n);

	pref[0] = a[0] > 0 ? a[0] : 0;
	suff[n - 1] = a[n - 1] < 0 ? abs(a[n - 1]) : 0;
	for (int i = 1; i < n; ++i) {
		pref[i] = pref[i - 1];
		if (a[i] > 0) pref[i] += a[i];
	}
	for (int i = n - 2; i >= 0; --i) {
		suff[i] = suff[i + 1];
		if (a[i] < 0) suff[i] -= a[i];
	}

	/*for (int i = 0; i < n; ++i) {
		cout << pref[i] << " \n"[i == n - 1];
	}
	for (int i = 0; i < n; ++i) {
		cout << suff[i] << " \n"[i == n - 1];
	}*/

	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		ans = max(ans, pref[i] + suff[i]);
	}
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
3
6
3 1 4 -1 -5 -9
6
-10 -3 -17 1 19 20
1
1

*/

/*
23
40
1

*/