/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P35
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int h, m;
	cin >> h >> m;

	int minutes = 0;

	minutes += (24 - h) * 60;
	minutes -= m;

	if (h == 0 && m == 0) minutes = 0;

	cout << minutes << "\n";
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
23 55
23 0
0 1
4 20
23 59


5
60
1439
1180
1

*/