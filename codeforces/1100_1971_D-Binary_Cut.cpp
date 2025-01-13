/*
https://codeforces.com/problemset/problem/1971/D
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;

		bool foundZeroOne = false;
		int parts = 0;
		int n = s.size();
		for (int i = 0; i < n; ++i) {
			if (s[i] == '1') {
				while (i < n and s[i] == '1') i++;
				parts++;
				i--;
			} else {
				while (i < n and s[i] == '0') i++;
				if (!foundZeroOne) {
					while (i < n and s[i] == '1') i++;
					foundZeroOne = true;
				}
				parts++;
				i--;
			}
		}

		cout << parts << "\n";
	}
}


/*
6
11010
00000000
1
10
0001111
0110

*/

/*
3
1
1
2
1
2

*/