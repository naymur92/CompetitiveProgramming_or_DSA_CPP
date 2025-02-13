/*
https://codeforces.com/problemset/problem/2062/C
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

		long long ans = accumulate(a.begin(), a.end(), 0LL);

		while (n > 1) {
			for (int i = 0; i < n - 1; ++i) {
				a[i] -= a[i + 1];
			}
			n--;

			long long sum = accumulate(a.begin(), a.begin() + n, 0LL);

			ans = max(ans, abs(sum));
		}

		cout << ans << "\n";
	}
}


/*
5
1
-1000
2
5 -3
2
1000 1
9
9 7 9 -9 9 -8 7 -8 9
11
678 201 340 444 453 922 128 987 127 752 0

*/

/*
-1000
8
1001
2056
269891

*/