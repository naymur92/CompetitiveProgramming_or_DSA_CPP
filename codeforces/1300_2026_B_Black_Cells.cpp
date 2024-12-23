/*
https://codeforces.com/problemset/problem/2026/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<long long> a(n);

		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		long long k = 0;

		if (n % 2 == 0) {
			for (int i = 1; i < n; i += 2) {
				k = max(k, a[i] - a[i - 1]);
			}
		} else {
			k = 1e18;
			for (int i = 0; i < n; i += 2) {
				long long maxi = 1;
				for (int j = 0; j < n; j += 2) {
					if (i != j) {
						maxi = max(maxi, a[j + 1] - a[j]);
					} else {
						j--;
					}
				}
				k = min(k, maxi);
			}
		}

		cout << k << "\n";
	}
}


/*
4
2
1 2
1
7
3
2 4 9
5
1 5 8 10 13

*/

/*
1
1
2
3

*/