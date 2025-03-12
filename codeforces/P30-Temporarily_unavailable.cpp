/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P30
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int dist[2];
	int c, r;
	cin >> dist[0] >> dist[1] >> c >> r;

	sort(dist, dist + 2);

	int left = c - r, right = c + r;

	int ans = 0;
	if (left > dist[0]) {
		ans += left - dist[0];
	}
	if (right < dist[1]) {
		ans += dist[1] - right;
	}

	ans = min(ans, dist[1] - dist[0]);

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
9
1 10 7 1
3 3 3 0
8 2 10 4
8 2 10 100
-10 20 -17 2
-3 2 2 0
-3 1 2 0
2 3 2 3
-1 3 -2 2


7
0
4
0
30
5
4
0
3

*/