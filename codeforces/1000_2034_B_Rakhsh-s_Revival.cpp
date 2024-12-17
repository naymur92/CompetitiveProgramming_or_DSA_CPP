/*
https://codeforces.com/problemset/problem/2034/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		string s;
		cin >> s;

		int ans = 0;
		for (int i = 0; i < n; ++i) {
			if (s[i] == '1') continue;

			int j = i;
			while (j < n and j < i + m - 1 and s[j] == '0') j++;

			if (j < n and s[j] == '0') {
				ans++;
				j += k;
			}

			i = max(j - 1, i);
		}
		cout << ans << "\n";
	}
}


/*
3
5 1 1
10101
5 2 1
10101
6 3 2
000000

*/

/*
2
0
1

*/