/*
https://codeforces.com/problemset/problem/2046/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int a[2][n];

		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < n; ++j) {
				cin >> a[i][j];
			}
		}

		long cost = -1e11;
		for (int i = 0; i < n; ++i) {
			long cur_cost = a[0][i] + a[1][i];
			for (int j = 0; j < n; ++j) {
				if (i == j) continue;

				cur_cost += max(a[0][j], a[1][j]);
			}
			cost = max(cost, cur_cost);
		}

		cout << cost << "\n";
	}
}


/*
3
1
-10
5
3
1 2 3
10 -5 -3
4
2 8 5 3
1 10 3 4


*/

/*
-5
16
29

*/