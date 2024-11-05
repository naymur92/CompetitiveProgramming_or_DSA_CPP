/*
https://codeforces.com/problemset/problem/2035/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n, m, r, c;
		cin >> n >> m >> r >> c;

		long long ans = 1LL * (n - r) * (2 * m - 1) + m - c;

		cout << ans << "\n";
	}
}


/*
4
2 3 1 2
2 2 2 1
1 1 1 1
1000000 1000000 1 1

*/

/*
6
1
0
1999998000000

*/