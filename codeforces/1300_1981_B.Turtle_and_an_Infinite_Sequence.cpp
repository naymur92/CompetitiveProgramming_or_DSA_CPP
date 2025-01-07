/*
https://codeforces.com/problemset/problem/1981/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		int ans = 0, l = max(0, n - m), r = n + m;
		for (int i = 0; i <= 30; ++i) {
			// cout << (r>>i) << " => " << (l>>i) << "\n";
			if ((l>>i) & 1 or (r>>i) != (l>>i)) ans |= 1<<i;
		}
		// cout << "\n";

		cout << ans << "\n";
	}
}


/*
9
0 0
0 1
0 2
1 0
5 2
10 1
20 3
1145 14
19198 10

*/

/*
0
1
3
1
7
11
23
1279
19455

*/