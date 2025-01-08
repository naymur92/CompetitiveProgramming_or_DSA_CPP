/*
https://codeforces.com/problemset/problem/2039/C1
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		long long x, m;
		cin >> x >> m;

		long long ans = 0;

		for (long long y = 1; y <= min(m, 2 * x); ++y) {
			long long xy = x^y;
			if (xy != 0 and (x % xy == 0 or y % xy == 0)) ans++;
		}

		cout << ans << "\n";
	}
}


/*
5
6 9
5 7
2 3
6 4
4 1
*/

/*
3
2
1
1
0

*/