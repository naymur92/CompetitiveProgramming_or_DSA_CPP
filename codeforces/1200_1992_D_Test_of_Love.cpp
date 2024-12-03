/*
https://codeforces.com/problemset/problem/1992/D
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--)
	{
		// cout << "Test: " << t << "\n";

		int n, m, k;
		string s;
		cin >> n >> m >> k >> s;

		s = "L" + s + "L";

		int curr = 0, i = 0;
		while (curr <= n + 1)
		{
			// cout << curr << "\n";

			for (int j = curr + 1; j <= n + 1 && j - curr <= m; ++j)
			{
				if (s[j] == 'L') {
					curr = j;
				}
			}

			// cout << curr << "\n";

			if (curr > n + 1) break;

			// cout << curr << "=>" << s[curr] << "\n";

			if (s[curr] == 'L') curr += m;

			// cout << curr << "\n";


			for (int j = curr; j <= n + 1 && k > 0; ++j)
			{
				if (s[j] == 'C') break;
				else if (s[j] == 'W') {
					k--;
				}

				curr = j + 1;

				// cout << "J: " << j << "=>" << s[curr] << "\n";

				if (s[curr] == 'L') break;
			}

			// cout << curr << "\n";

			if (i == curr || (s[curr] == 'W' && k == 0) || s[curr] == 'C') break;

			i = curr;
		}

		// if (10000 - t == 3348) cout << n << "#" << m << "#" << k << "#" << s;
		// else cout << (curr > n ? "YES\n" : "NO\n");

		cout << (curr > n ? "YES\n" : "NO\n");

		// cout << "\n\n";
	}
}


/*
6
6 2 0
LWLLLW
6 1 1
LWLLLL
6 1 1
LWLLWL
6 2 15
LWLLCC
6 10 0
CCCCCC
6 6 1
WCCCCW

*/

/*
YES
YES
NO
NO
YES
YES

*/