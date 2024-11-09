/*
https://codeforces.com/problemset/problem/2025/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		string s, t;
		cin >> s >> t;

		int f_common = 0;

		int s_size = s.size();
		int t_size = t.size();

		for (int i = 0; i < min(s_size, t_size); ++i) {
			if (s[i] == t[i])
				f_common++;
			else
				break;
		}

		int ans = s_size + t_size - f_common;
		if (f_common > 0)
			ans += 1;

		cout << ans << "\n";
	}
}


/*
3
GARAGE
GARAGEFORSALE
ABCDE
AABCD
TRAINING
DRAINING

*/

/*
14
10
16

*/