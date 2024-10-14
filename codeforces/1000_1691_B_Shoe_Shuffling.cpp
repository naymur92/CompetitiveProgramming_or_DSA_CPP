/*
https://codeforces.com/problemset/problem/1691/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int s[n];

		for (int i = 0; i < n; ++i)
			cin >> s[i];

		sort(s, s + n);

		int p[n];
		for (int i = 0; i < n; ++i)
			p[i] = i + 1;

		int counting[n];
		counting[0] = 0;

		for (int i = 1; i < n; ++i) {
			if (s[i] == s[i - 1])
				counting[i] = counting[i - 1] + 1;
			else
				counting[i] = 0;
		}

		// for (int i = 0; i < n; ++i)
		// 	cout << counting[i] << " ";
		// cout << "\n";

		int l = 0, r = 0;
		bool is_possible = true;

		for (int i = 1; i < n; ++i) {
			if (counting[i] == 0 && counting[i  - 1] == 0) {
				is_possible = false;
				break;
			} else {
				while (counting[i] != 0 && i < n)
					i++;

				rotate(p + l, p + i - 1, p + i);
				l = i;
			}
		}
		if (counting[n- 1] == 0)
			is_possible = false;

		if (is_possible)
			for (int i = 0; i < n; ++i)
				cout << p[i] << " ";
		else
			cout << -1;

		cout << "\n";
	}

}


/*
2
5
1 1 1 1 1
6
3 6 8 13 15 21

*/

/*
5 1 2 3 4 
-1

*/