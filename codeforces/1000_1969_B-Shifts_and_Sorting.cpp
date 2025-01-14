/*
https://codeforces.com/problemset/problem/1969/B
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

		long long ans = 0;
		int i = 0;
		while (i < n and s[i] == '0') i++;

		int substr1 = 0;
		while (i < n and s[i] == '1') {
			i++;
			substr1++;
		}

		while (i < n) {
			// cout << substr1 << " ";
			if (s[i] == '0') {
				ans += (substr1 + 1);
			} else {
				substr1++;
			}
			i++;
		}
		// cout << "\n";

		cout << ans << "\n";
	}
}


/*
5
10
0000
11000
101011
01101001

*/

/*
2
0
9
5
11

*/