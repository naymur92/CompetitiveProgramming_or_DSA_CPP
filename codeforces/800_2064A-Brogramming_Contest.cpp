/*
https://codeforces.com/contest/2064/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	int steps = 0;
	int i = 0;
	// while (i < n and s[i] == '0') i++;

	// if (i == 0) steps++;

	for (int j = i; j < n; ++j) {
		while (j < n and s[j] == s[i]) i++;
		steps++;
		j = i - 1;
	}
	if (s[0] == '0') steps--;

	cout << steps << "\n";
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
5
00110
4
1111
3
001
5
00000
3
101

*/

/*
2
1
1
0
3

*/