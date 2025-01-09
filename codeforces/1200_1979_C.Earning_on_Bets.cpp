/*
https://codeforces.com/problemset/problem/1979/C
*/

#include <bits/stdc++.h>

using namespace std;

long long getLcm(long long a, long long b) {
	return (a * b) / __gcd(a, b);
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> k(n);
		for (int i = 0; i < n; ++i) {
			cin >> k[i];
		}

		long long lcm = 1;
		long long sum = 0;
		bool numNotInRange = false;

		for (int i = 0; i < n; ++i) {
			lcm = getLcm(lcm, 1LL * k[i]);
		}

		for (int i = 0; i < n; ++i) {
			if (lcm / k[i] > 1e9) {
				numNotInRange = true;
				break;
			}
			k[i] = lcm / k[i];
			sum += k[i];
		}

		// cout << lcm << " " << sum << "\n";

		if (sum < lcm and !numNotInRange) {
			for (int i = 0; i < n; ++i) {
				cout << k[i] << " \n"[i == n - 1];
			}
		} else {
			cout << -1 << "\n";
		}
	}
}


/*
6
3
3 2 7
2
3 3
5
5 5 5 5 5
6
7 9 3 17 9 13
3
6 3 2
5
9 4 6 8 3

*/

/*
27 41 12 
1 1 
-1
1989 1547 4641 819 1547 1071 
-1
8 18 12 9 24

*/