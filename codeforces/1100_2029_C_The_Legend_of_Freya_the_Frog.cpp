/*
https://codeforces.com/problemset/problem/2029/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int x, y, k;
		cin >> x >> y >> k;

		int p = max(x, y);
		long moves = ceil(p / (k * 1.0)) * 2;

		if (ceil(x / (k * 1.0)) > ceil(y / (k * 1.0)))
			moves--;

		cout << moves << "\n";

	}
}


/*
3
9 11 3
0 10 8
1000000 100000 10

*/

/*
8
4
199999

*/