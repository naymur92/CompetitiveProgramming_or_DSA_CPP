/*
https://codeforces.com/problemset/problem/1985/E
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int x, y, z;
		long long k;
		cin >> x >> y >> z >> k;

		long long ans = 0;
		for (int a = 1; a <= x; ++a) {
			for (int b = 1; b <= y; ++b) {
				int c = k / (a * b);

				if (c <= z and a * 1LL * b * c == k) {
					ans = max(ans, (x - a + 1) * 1LL * (y - b + 1) * (z - c + 1));
				}
			}
		}

		cout << ans << "\n";
	}
}


/*
7
3 3 3 8
3 3 3 18
5 1 1 1
2 2 2 7
3 4 2 12
4 3 1 6
1800 1800 1800 4913000000

*/

/*
8
2
5
0
4
4
1030301

*/