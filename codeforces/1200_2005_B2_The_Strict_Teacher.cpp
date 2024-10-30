/*
https://codeforces.com/problemset/problem/2005/B2
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, m, q;
		cin >> n >> m >> q;

		vector<int> b(m);
		for (int i = 0; i < m; ++i)
			cin >> b[i];
		sort(b.begin(), b.end());

		/*vector<int> a(q);
		for (int i = 0; i < q; ++i)
			cin >> a[i];
		sort(a.begin(), a.end());

		int i = 0, j = 0;
		while (j < q) {
			int moves = 0;
			if (a[j] < b[0]) {
				moves = b[0] - 1;
			} else if (a[j] > b[m - 1]) {
				moves = n - b[m - 1];
			} else {
				while (i < m && a[j] > b[i + 1])
					i++;

				moves = (b[i + 1] - b[i]) / 2;
			}
			j++;

			cout << moves << "\n";
		}*/

		for (int i = 0; i < q; ++i) {
			int b_i;
			cin >> b_i;

			int indx = upper_bound(b.begin(), b.end(), b_i) - b.begin();
			int moves = 0;

			if (indx == 0)
				moves = b[0] - 1;
			else if (indx == m)
				moves = n - b[m - 1];
			else
				moves = (b[indx] - b[indx - 1]) / 2;

			cout << moves << "\n";
		}
	}
}


/*
2
8 1 1
6
3
10 3 3
1 4 8
2 3 10

*/

/*
5
1
1
2

*/