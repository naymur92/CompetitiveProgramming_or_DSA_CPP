/*
https://codeforces.com/problemset/problem/2119/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b, x, y;
	cin >> a >> b >> x >> y;

	int cost = -1;
	if (a <= b) {
		int diff = b - a;
		cost = (diff / 2) * (x + min(x, y));

		if (diff % 2) {
			if (b % 2 == 0) cost += x;
			else cost += min(x, y);
		}
	}
	else if (a - 1 == b && a % 2) {
		cost = y;
	}

	cout << cost << "\n";
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
1 4 1 2
1 5 2 1
3 2 2 1
1 3 2 1
2 1 1 2
3 1 1 2
1 100 10000000 10000000

*/

/*
3
6
1
3
-1
-1
990000000

*/