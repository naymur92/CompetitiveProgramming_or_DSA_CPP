/*
https://codeforces.com/problemset/problem/2029/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		string s, t;
		cin >> s >> t;

		int cn0 = count(s.begin(), s.end(), '0');
		int cn1 = n - cn0;

		bool is_success = true;
		for (int i = 0; i < n - 1; ++i) {
			if (cn0 == 0 || cn1 == 0) {
				is_success = false;
				break;
			}

			if (t[i] == '0') cn1--;
			else cn0--;
		}

		cout << (is_success ? "YES\n" : "NO\n");
	}
}


/*
6
2
11
0
2
01
1
4
1101
001
6
111110
10000
6
010010
11010
8
10010010
0010010

*/

/*
NO
YES
YES
NO
YES
NO

*/