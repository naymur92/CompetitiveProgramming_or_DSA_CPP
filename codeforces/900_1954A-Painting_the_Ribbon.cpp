/*
https://codeforces.com/problemset/problem/1954/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;

		// calculate max number of same color colored by Alice
		int max_color = (n + m - 1) / m;	// take ceil

		if (max_color + k >= n) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
	}
}


/*
5
1 1 1
5 1 1
5 2 1
5 2 2
5 5 3

*/

/*
NO
NO
YES
NO
YES

*/