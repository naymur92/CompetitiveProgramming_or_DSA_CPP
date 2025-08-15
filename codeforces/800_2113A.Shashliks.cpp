/*
https://codeforces.com/problemset/problem/2113/A
*/

#include <bits/stdc++.h>

using namespace std;

int calc(int k, int a, int b, int x, int y) {
	int curr = 0;
	curr = max((k - a + x) / x, 0);
	k -= curr * x;
	curr += max((k - b + y) / y, 0);

	return curr;
}

void solve() {
	int k, a, b, x, y;
	cin >> k >> a >> b >> x >> y;

	cout << max(calc(k, a, b, x, y), calc(k, b, a, y, x)) << "\n";
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
5
10 3 4 2 1
1 10 10 1 1
100 17 5 2 3
28 14 5 2 4
277 5 14 1 3
*/

/*
8
0
46
10
273

*/