/*
https://codeforces.com/problemset/problem/2030/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int zero_cnt = 0;
	int sum = 0;

	for (int i = 0; i < n; ++i) {
		int s;
		cin >> s;
		if (s == 0) zero_cnt++;
		else sum += s;
	}

	cout << zero_cnt + sum << "\n";
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
2
3
0 1 1
3
1 2 3


*/

/*
3
6

*/