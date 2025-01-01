/*
https://codeforces.com/problemset/problem/2044/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		long long x, y, k;
		cin >> x >> y >> k;

		while (k > 0 and x != 1) {
			long long num = y - (x % y);
			num = min(k, num);
			x += num;
			while (x % y == 0)
				x /= y;
			k -= num;
		}
		// cout << (k % (y - 1));
		// cout << "\nans: ";

		cout << x + (k % (y - 1)) << "\n";
	}
}


/*
13
1 3 1
2 3 1
24 5 5
16 3 2
2 2 1
1337 18 1
1 2 144133
12345678 3 10
998244353 2 998244353
998244353 123456789 998244352
998244354 998241111 998244352
998244355 2 9982443
1000000000 1000000000 1000000000

*/

/*
2
1
1
2
3
1338
1
16936
1
21180097
6486
1
2

*/