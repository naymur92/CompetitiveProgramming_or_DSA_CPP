/*
https://codeforces.com/problemset/problem/1976/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> a(n), b(n + 1);

		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int i = 0; i <= n; ++i) {
			cin >> b[i];
		}

		long long ans = 0;
		int last = b[n];
		int extra = INT_MAX;
		for (int i = 0; i < n; ++i) {
			ans += abs(a[i] - b[i]);

			/*if (a[i] < b[i] and last >= a[i] and last <= b[i]) extra = 1;
			else if (a[i] > b[i] and last <= a[i] and last >= b[i]) extra = 1;*/

			if (min(a[i], b[i]) <= last and max(a[i], b[i]) >= last) extra = 1;

			extra = min(extra, abs(last - a[i]) + 1);
			extra = min(extra, abs(last - b[i]) + 1);
		}

		cout << ans + extra << "\n";
	}
}


/*
3
1
2
1 3
2
3 3
3 3 3
4
4 2 1 2
2 1 5 2 3

*/

/*
3
1
8

*/