/*
https://codeforces.com/problemset/problem/1861/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string a, b;
		cin >> a >> b;

		bool is_possible = false;

		for (int i = 0; i < a.size() - 1; ++i) {
			if (a[i] == '0' && b[i] == '0' && a[i + 1] == '1' && b[i + 1] == '1')
				is_possible = true;
		}


		cout << (is_possible ? "YES\n" : "NO\n");
	}
}


/*
7
01010001
01110101
01001
01001
000101
010111
00001
01111
011
001
001001
011011
010001
011011

*/

/*
YES
YES
YES
NO
NO
NO
YES

*/