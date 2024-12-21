/*
https://codeforces.com/problemset/problem/1984/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;

		int n = s.size();

		if (s[0] != '1' || s[n - 1] == '9') {
			cout << "NO\n";
		} else {
			bool is_possible = true;
			for (int i = 1; i < n - 1; ++i) {
				if (s[i] == '0') {
					is_possible = false;
					break;
				}
			}

			cout << (is_possible ? "YES\n" : "NO\n");
		}
	}
}


/*
11
1337
200
1393938
1434
98765432123456789
11111111111111111
420
1984
10
69
119

*/

/*
YES
NO
YES
YES
NO
YES
NO
YES
YES
NO
NO

*/