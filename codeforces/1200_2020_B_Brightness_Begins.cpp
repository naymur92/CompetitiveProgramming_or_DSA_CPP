/*
https://codeforces.com/problemset/problem/2020/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		long long k;
		cin >> k;

		long long l = 1, r = 2e18, n;

		while (l < r) {
			long long mid = (l + r) / 2;

			n = mid - int(sqrt(mid));
			if (n >= k)
				r = mid;
			else
				l = mid + 1;
		}

		cout << r << "\n";
	}
}


/*
3
1
3
8

*/

/*
2
5
11

*/