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


		int a_i;
		cin >> a_i;
		int indx = upper_bound(b.begin(), b.end(), a_i) - b.begin();
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


/*
3
10 2 1
1 4
2
8 2 1
3 6
1
8 2 1
3 6
8

*/

/*
1
2
2

*/