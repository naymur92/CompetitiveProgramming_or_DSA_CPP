/*
https://codeforces.com/problemset/problem/2061/B
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<long long> a(n);
	for (auto &ai: a) cin >> ai;

	sort(a.begin(), a.end());

	int indx = -1;
	for (int i = 1; i < n; ++i) {
		if (a[i] == a[i - 1]) {
			indx = i;
			break;
		}
	}

	if (indx == -1) {
		cout << -1 << "\n";
		return;
	}

	long long c = a[indx];

	a.erase(a.begin() + indx - 1);
	a.erase(a.begin() + indx - 1);

	for (int i = 1; i < n - 2; ++i) {
		if (abs(a[i] - a[i - 1]) < 2 * c) {
			cout << c << " " << c << " " << a[i - 1] << " " << a[i] << "\n";
			return;
		}
	}

	cout << -1 << "\n";
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
7
4
5 5 5 10
4
10 5 10 5
4
1 2 3 4
4
1 1 1 3
6
4 2 1 5 7 1
6
10 200 30 300 30 100
4
100000000 100000000 1 2

*/

/*
5 5 5 10
5 5 10 10
-1
-1
1 1 4 5
-1
100000000 100000000 1 2

*/