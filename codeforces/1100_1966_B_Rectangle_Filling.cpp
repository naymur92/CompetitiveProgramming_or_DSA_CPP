/*
https://codeforces.com/problemset/problem/1966/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		vector<string> matrix(n);

		for (int i = 0; i < n; ++i) {
			cin >> matrix[i];
		}

		bool is_possible = true;

		/*if (n == 1 or m == 1) {
			if (matrix[0][0] != matrix[n - 1][m - 1]) {
				is_possible = false;
			}
		} else */
		if (matrix[0][0] != matrix[n - 1][m - 1]) {
			bool row_match = true, col_match = true;
			for (int i = 0; i < m - 1; ++i) {
				if (matrix[0][i] != matrix[0][i + 1] or matrix[n - 1][i] != matrix[n - 1][i + 1]) {
					row_match = false;
				}
			}

			// if (row_match) is_possible = false;

			for (int i = 0; i < n - 1; ++i) {
				if (matrix[i][0] != matrix[i + 1][0] or matrix[i][m - 1] != matrix[i + 1][m - 1]) {
					col_match = false;
				}
			}

			if (row_match or col_match) is_possible = false;
		}

		cout << (is_possible ? "YES\n" : "NO\n");
	}
}


/*
8
2 1
W
B
6 6
WWWWBW
WBWWWW
BBBWWW
BWWWBB
WWBWBB
BBBWBW
1 1
W
2 2
BB
BB
3 4
BWBW
WBWB
BWBW
4 2
BB
BB
WW
WW
4 4
WWBW
BBWB
WWBB
BBBB
1 5
WBBWB


*/

/*
NO
YES
YES
YES
YES
NO
YES
NO

*/