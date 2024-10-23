/*
https://codeforces.com/problemset/problem/2021/C1
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, m, q;
		cin >> n >> m >> q;

		int a[n];
		for (int i = 0; i < n; ++i)
			cin >> a[i];

		int b[m];
		for (int i = 0; i < m; ++i)
			cin >> b[i];

		int pos_b = 0;

		
		// unordered_set<int> completed;

		// bool is_possible = true;
		// for (int i = 0; i < n; ++i) {
		// 	while (completed.find(b[pos_b]) != completed.end() && pos_b < m)
		// 		pos_b++;

		// 	if (pos_b == m)
		// 		break;

		// 	if (a[i] == b[pos_b]) {
		// 		completed.insert(a[i]);
		// 	} else {
		// 		is_possible = false;
		// 		break;
		// 	}
		// }

		/*another solution*/
		vector<int> completed(n + 1);

		bool is_possible = true;
		for (int i = 0; i < n; ++i) {
			while (pos_b < m && completed[b[pos_b]] != 0)
				pos_b++;

			if (pos_b == m)
				break;

			if (a[i] == b[pos_b]) {
				completed[a[i]] = 1;
			} else {
				is_possible = false;
				break;
			}
		}

		cout << (is_possible ? "YA\n" : "TIDAK\n");
	}
}


/*
3
4 2 0
1 2 3 4
1 1
3 6 0
1 2 3
1 1 2 3 3 2
4 6 0
3 1 4 2
3 1 1 2 3 4

*/

/*
YA
YA
TIDAK

*/