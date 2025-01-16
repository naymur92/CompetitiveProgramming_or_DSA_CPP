/*
https://codeforces.com/problemset/problem/1958/A
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

		for (int a = 0; 3 * a <= n; ++a) {
			int b = (n - (3 * a)) / 5;
			
			if (b < 0)
				continue;

			// cout << a << "," << b << " ";
			// cout << (3 * a + 5 * b) << "\n";

			ans = min(ans, n - (3 * a + 5 * b));
		}
		// cout << "\n";

		cout << ans << "\n";
	}
}


/*
5
7
8
42
2
11

*/

/*
1
0
0
2
0

*/