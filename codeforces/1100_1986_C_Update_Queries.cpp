/*
https://codeforces.com/problemset/problem/1986/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		string s;
		cin >> s;

		set<int> indx;

		for (int i = 0; i < m; ++i) {
			int ind;
			cin >> ind;

			indx.insert(ind);
		}

		string c;
		cin >> c;

		sort(c.begin(), c.end());

		int i = 0;
		for (auto &ind: indx) {
			s[ind - 1] = c[i++];
		}

		cout << s << "\n";
	}
}


/*
4
1 2
a
1 1
cb
4 4
meow
1 2 1 4
zcwz
7 4
abacaba
1 3 5 7
damn
7 10
traktor
7 6 5 4 3 2 1 6 4 2
codeforces

*/

/*
b
cwoz
abdcmbn
ccdeefo

*/