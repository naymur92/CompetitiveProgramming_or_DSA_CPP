/*
https://codeforces.com/problemset/problem/1837/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;

		char prev = '0';
		for (auto &c: s) {
			if (c == '?')
				c = prev;

			prev = c;
		}

		cout << s << "\n";
	}
}


/*
4
??01?
10100
1??10?
0?1?10?10

*/

/*
00011
10100
111101
011110010

*/