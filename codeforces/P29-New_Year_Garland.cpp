/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P29
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a[3];

	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);

	/*for (int i = 0; i < 3; ++i) {
		cout << a[i] << " \n"[i == 2];
	}*/

	if (a[0] + a[1] < a[2] - 1) cout << "NO\n";
	else cout << "YES\n";
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
3 3 3
1 10 2
2 1 1


Yes
No
Yes

*/