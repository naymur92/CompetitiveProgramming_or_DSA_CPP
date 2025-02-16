/*
https://codeforces.com/problemset/problem/2056/C
*/

#include <bits/stdc++.h>

using namespace std;


void solve() {
	int n;
	cin >> n;

	cout << 1 << " ";
	for (int i = 1; i <= n - 3; ++i) {
		cout << i << " ";
	}
	cout << 1 << " "  << 2 << "\n";
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
6
9
15

*/

/*
1 1 2 3 1 2
7 3 3 7 5 3 7 7 3
15 8 8 8 15 5 8 1 15 5 8 15 15 15 8

*/