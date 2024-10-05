/*
https://codeforces.com/problemset/problem/1986/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		int martix[n][m];

		for (int i = 0; i < n; ++i)
			for (int j = 0; j < m; ++j)
				cin >> martix[i][j];

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				int adj_max = 0;

				if (j > 0) adj_max = max(adj_max, martix[i][j - 1]);
				if (j < m - 1) adj_max = max(adj_max, martix[i][j + 1]);
				if (i > 0) adj_max = max(adj_max, martix[i - 1][j]);
				if (i < n - 1) adj_max = max(adj_max, martix[i + 1][j]);

				if (martix[i][j] > adj_max)
					martix[i][j] = adj_max;
			}
		}

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j)
				cout << martix[i][j] << " ";

			cout << "\n";
		}
		// cout << "\n";
	}
}


/*
6
1 2
3 1
2 1
1
1
2 2
1 2
3 4
2 3
7 4 5
1 8 10
5 4
92 74 31 74
74 92 17 7
31 17 92 3
74 7 3 92
7 31 1 1
3 3
1000000000 1 1000000000
1 1000000000 1
1000000000 1 1000000000

*/

/*
1 1 
1 
1 
1 2 
3 3 
4 4 5 
1 8 8 
74 74 31 31 
74 74 17 7 
31 17 17 3 
31 7 3 3 
7 7 1 1 
1 1 1 
1 1 1 
1 1 1 

*/