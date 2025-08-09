/*
https://codeforces.com/problemset/problem/2128/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, c;
	cin >> n >> c;

	vector<int> a(n);
	for (int &ai: a) cin >> ai;
	sort(a.rbegin(), a.rend());

	int res = 0;
	int i = 0;
	while (i < n && a[i] > c) res++, i++;
	while (i < n) {
		if (a[i] > c) res++;
		c /= 2;

		// cout << a[i] << " ";

		i++;
		while (i < n && a[i] > c) res++, i++;
	}

	cout << res << "\n";
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
5 10
10 4 15 1 8
3 42
1000000000 1000000000 1000000000
10 30
29 25 2 12 15 42 14 6 16 9
10 1000000
1 1 1 1 1 1 1 1 1 864026633

*/

/*
2
3
6
1

*/