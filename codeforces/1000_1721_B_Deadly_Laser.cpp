/*
https://codeforces.com/problemset/problem/1721/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, m, s_x, s_y, d;
		cin >> n >> m >> s_x >> s_y >> d;

		bool is_possible = true;

		// if (s_x - 1 <= d && s_y - 1 <= d) is_possible = false;	// check for blocking of start corner
		// if (n - s_x <= d && m - s_y <= d) is_possible = false;	// check for blocking of end corner
		// if (s_x - 1 <= d && n - s_x <= d) is_possible = false;	// check for vertical blocking
		// if (s_y - 1 <= d && m - s_y <= d) is_possible = false;	// check for horizontal blocking

		// shorten the conditions using boolean calculations
		// if ((s_x - 1 <= d || m - s_y <= d) && (s_y - 1 <= d || n - s_x <= d)) is_possible = false;

		// more shorter version
		if (min(s_x - 1, m - s_y) <= d && min(s_y - 1, n - s_x) <= d) is_possible = false;

		if (is_possible)
			cout << (n + m - 2) << "\n";
		else
			cout << -1 << "\n";
	}
}


/*
3
2 3 1 3 0
2 3 1 3 1
5 5 3 4 1

*/

/*
3
-1
8

*/