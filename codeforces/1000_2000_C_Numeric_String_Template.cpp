/*
https://codeforces.com/problemset/problem/2000/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);

		for (int i = 0; i < n; ++i)
			cin >> a[i];

		int m;
		cin >> m;
		vector<string> s(m);

		for (int i = 0; i < m; ++i)
			cin >> s[i];

		for (int i = 0; i < m; ++i) {
			if (s[i].size() != n)
				cout << "NO\n";
			else {
				int match = true;

				map<int, char> m1;
				map<char, int> m2;

				for (int j = 0; j < n; ++j) {
					int x = a[j];
					char c = s[i][j];

					if (!m1.count(x))
						m1[x] = c;
					if (!m2.count(c))
						m2[c] = x;

					if (m1[x] != c || m2[c] != x)
						match = false;
				}

				cout << (match ? "YES\n" : "NO\n");
			}
		}
	}
}


/*
3
5
3 5 2 1 3
2
abfda
afbfa
2
1 2
3
ab
abc
aa
4
5 -3 5 -3
4
aaaa
bcbc
aba
cbcb

*/

/*
YES
NO
YES
NO
NO
NO
YES
NO
YES
*/