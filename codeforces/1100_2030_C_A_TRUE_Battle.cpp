/*
https://codeforces.com/problemset/problem/2030/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		string s;
		cin >> n >> s;

		bool ans = (s[0] == '1' || s[n - 1] == '1');
		for (int i = 1; i < n; ++i) {
			if (s[i] == '1' && s[i - 1] == '1')
				ans = true;
		}

		cout << (ans ? "YES\n" : "NO\n");
	}
}


/*
5
2
11
3
010
12
101111111100
10
0111111011
8
01000010

*/

/*
YES
NO
YES
YES
NO

*/