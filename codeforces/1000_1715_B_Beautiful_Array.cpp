/*
https://codeforces.com/problemset/problem/1715/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		unsigned long long n, k, b, s;

		cin >> n >> k >> b >> s;

		// (k * (b + 1) - 1) + (n - 1) * (k - 1) ==> (k * b + n * (k - 1)
		if (s >= b * k && s <= (k * b + n * (k - 1))) {
			vector<unsigned long long> result(n);

			if ((k * (b + 1) - 1) <= s) {
				result[n - 1] = k * (b + 1) - 1;
				s -= (k * (b + 1) - 1);
			} else {
				result[n - 1] = s;
				s = 0;
			}

			for (int i = n - 2; i >= 0; --i) {
				if (s == 0)
					break;

				if (k - 1 <= s) {
					result[i] = k - 1;
					s -= (k - 1);
				} else {
					result[i] = s;
					s = 0;
				}
			}

			for (int i = 0; i < n; ++i)
				cout << result[i] << " ";
			cout << "\n";
		}
		else
			cout << -1 << "\n";
	}
}


/*
8
1 6 3 100
3 6 3 12
3 6 3 19
5 4 7 38
5 4 7 80
99978 1000000000 100000000 1000000000000000000
1 1 0 0
4 1000000000 1000000000 1000000000000000000

*/

/*
-1
-1
0 0 19
0 3 3 3 29
-1
-1
0
0 0 0 1000000000000000000

*/