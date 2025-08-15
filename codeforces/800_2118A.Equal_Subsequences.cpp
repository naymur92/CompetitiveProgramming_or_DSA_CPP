/*
https://codeforces.com/problemset/problem/2118/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;

	int num_zeros = n - k;
	while (k--) cout << 1;
	while (num_zeros > 0 && num_zeros--) cout << 0;
	cout << "\n";
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
5
4 2
5 3
5 5
6 2
1 1


*/

/*
1010
10110
11111
100010
1
*/