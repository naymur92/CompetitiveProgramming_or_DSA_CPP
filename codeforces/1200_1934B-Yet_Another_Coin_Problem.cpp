/*
https://codeforces.com/problemset/problem/1934/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int ans = n;

		for (int i = 0; i < 3; ++i) {	// for one
			for (int j = 0; j < 2; ++j) {	// for three
				for (int k = 0; k < 5; ++k) {	// for six
					for (int l = 0; l < 3; ++l) {	// for ten
						int diff = n - (1 * i + 3 * j + 6 * k + 10 * l);
						int m = 0;
						if (diff >= 0 && diff % 15 == 0) {
							m = diff / 15;

							ans = min(ans, (i + j + k + l + m));
						}
					}
				}
			}
		}

		cout << ans << "\n";
	}
}


/*
14
1
2
3
5
7
11
12
14
16
17
18
20
98
402931328

*/

/*
1
2
1
3
2
2
2
3
2
3
2
2
8
26862090

*/