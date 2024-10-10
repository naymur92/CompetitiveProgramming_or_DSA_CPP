/*
https://codeforces.com/problemset/problem/1790/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		vector<int> p(n);
		vector<int> cnt(n + 1);
		vector<vector<int>> perms(n, vector<int>(n - 1));

		// take input and count first items
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n - 1; ++j) {
				cin >> perms[i][j];

				if (j == 0)
					cnt[perms[i][j]]++;
			}
		}

		// set the first item
		for (int i = 1; i <= n; ++i) {
			if (cnt[i] == n - 1) {
				p[0] = i;
				break;
			}
		}

		// set other items
		for (int i = 0; i < n; ++i) {
			if (perms[i][0] != p[0]) {
				for (int j = 0; j < n - 1; ++j)
					p[j + 1] = perms[i][j];
				break;
			}
		}

		// output the elements
		for (int i = 0; i < n; ++i)
			cout << p[i] << " ";
		cout << "\n";
	}
}


/*
5
4
4 2 1
4 2 3
2 1 3
4 1 3
3
2 3
1 3
1 2
5
4 2 1 3
2 1 3 5
4 2 3 5
4 1 3 5
4 2 1 5
4
2 3 4
1 3 4
1 2 3
1 2 4
3
2 1
1 3
2 3

*/

/*
4 2 1 3 
1 2 3 
4 2 1 3 5 
1 2 3 4 
2 1 3 

*/