/*
https://codeforces.com/problemset/problem/1954/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}


		/*int ans = n;
		int pos = -1;
		for (int i = 0; i < n; ++i) {
			if (a[0] == a[i] && a[i] == a[n - 1 - i]) {
				pos = i + 1;
			} else {
				break;
			}
		}

		if (pos == -1) ans = 0;
		else if (pos == n) ans = -1;
		else ans = pos;

		cout << ans << "\n";*/

		int ans = 1e9;
		for (int i = 0; i < n; ++i) {
			if (a[0] == a[i]) {
				int j = i;
				while (j < n and a[j] == a[0]) j++;
				ans = min(ans, j - i);
				i = j - 1;
			}
		}

		cout << (ans == n ? -1 : ans) << "\n";
	}
}


/*
4
3
2 2 2
5
1 2 1 2 1
1
1
7
3 3 3 5 3 3 3

*/

/*
-1
1
-1
3

*/