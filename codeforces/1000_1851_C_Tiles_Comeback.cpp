/*
https://codeforces.com/problemset/problem/1851/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		vector<vector<int>> colors(n + 1, vector<int>());
		vector<int> tiles(n);

		for (int i = 0; i < n; ++i) {
			cin >> tiles[i];

			colors[tiles[i]].push_back(i);
		}

		int first_c = tiles[0];
		int last_c = tiles[n - 1];

		bool is_possible = true;

		if (first_c == last_c) {
			if (colors[first_c].size() < k)
				is_possible = false;
		} else {
			if (colors[first_c].size() < k || colors[last_c].size() < k)
				is_possible = false;
			else {
				int indx1 = colors[first_c][k - 1];
				int indx2 = colors[last_c][colors[last_c].size() - k];

				if (indx1 >= indx2)
					is_possible = false;
			}
		}

		cout << (is_possible ? "YES\n" : "NO\n");
	}
}


/*
10
4 2
1 1 1 1
14 3
1 2 1 1 7 5 3 3 1 3 4 4 2 4
3 3
3 1 3
10 4
1 2 1 2 1 2 1 2 1 2
6 2
1 3 4 1 6 6
2 2
1 1
4 2
2 1 1 1
2 1
1 2
3 2
2 2 2
4 1
1 1 2 2

*/

/*
YES
YES
NO
NO
YES
YES
NO
YES
YES
YES

*/