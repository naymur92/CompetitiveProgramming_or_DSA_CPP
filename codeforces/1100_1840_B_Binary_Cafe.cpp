/*
https://codeforces.com/problemset/problem/1982/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		int ans = min(n, (1 << min(k, 30)) - 1) + 1;
		cout << ans << "\n";
	}
}


/*
5
1 2
2 1
2 2
10 2
179 100

*/

/*
2
2
3
4
180

*/