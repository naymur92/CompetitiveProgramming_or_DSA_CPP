/*
https://codeforces.com/problemset/problem/2055/B
*/

#include <bits/stdc++.h>

using namespace std;


void solve() {
	int n;
	cin >> n;

	vector<int> a(n);
	vector<int> b(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
		a[i] -= b[i];
	}

	sort(a.begin(), a.end());

	/*for (int i = 0; i < n; ++i) {
		cout << a[i] << " \n"[i == n - 1];
	}*/

	cout << (-a[0] <= a[1] ? "YES\n" : "NO\n");
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
4
0 5 5 1
1 4 4 0
3
1 1 3
2 2 1
2
1 10
3 3

*/

/*
YES
NO
YES

*/