/*
https://codeforces.com/problemset/problem/1933/C
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b, l;
	cin >> a >> b >> l;

	set<int> ans;

	while (true) {
		int x = l;
		while (true) {
			ans.insert(x);
			if (x % b != 0) break;
			x /= b;
		}
		if (l % a != 0) break;
		l /= a;
	}
	cout << ans.size() << "\n";
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
11
2 5 20
2 5 21
4 6 48
2 3 72
3 5 75
2 2 1024
3 7 83349
100 100 1000000
7 3 2
2 6 6
17 3 632043

*/

/*
6
1
5
12
6
11
24
4
1
3
24

*/