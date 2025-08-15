/*
https://codeforces.com/problemset/problem/2114/B
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, k;
	string s;

	cin >> n >> k >> s;
	int zero_cnt = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] == '0') zero_cnt++;
	}

	int min_pair = abs(n - 2 * zero_cnt) / 2;
	int max_pair = (zero_cnt / 2) + (n - zero_cnt) / 2;

	if (k < min_pair || k > max_pair) cout << "NO\n";
	else {
		// int pair = min_pair;
		// while (pair < max_pair && pair != k) pair += 2;

		// if (pair == k) cout << "YES\n";
		// else cout << "NO\n";

		if ((k - min_pair) % 2 == 0) cout << "YES\n";
		else cout << "NO\n";
	}

}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
6
6 2
000000
2 1
01
4 1
1011
10 2
1101011001
10 1
1101011001
2 1
11

*/

/*
NO
NO
YES
NO
YES
YES

*/