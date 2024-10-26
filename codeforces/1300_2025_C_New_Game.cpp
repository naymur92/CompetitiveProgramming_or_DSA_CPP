/*
https://codeforces.com/problemset/problem/2025/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		vector<int> a(n);

		for (int i = 0; i < n; ++i)
			cin >> a[i];

		sort(a.begin(), a.end());

		// for (int i = 0; i < n; ++i)
		// 	cout << a[i] << " ";
		// cout << "\n";

		int ans = 0;
		for (int i = 0, j = 0; i < n; ++i) {
			j = max(i, j);

			while (j < n - 1 && a[j + 1] - a[i] < k && a[j + 1] - a[j] <= 1)
				j++;
			
			ans = max(ans, j - i + 1);
		}

		cout << ans << "\n";
	}
}


/*
4
10 2
5 2 4 3 4 3 4 5 3 2
5 1
10 11 10 11 10
9 3
4 5 4 4 6 5 4 4 6
3 2
1 3 1

*/

/*
6
3
9
2

*/