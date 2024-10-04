/*
https://codeforces.com/problemset/problem/1490/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int c[3];
		c[0] = 0;
		c[1] = 0;
		c[2] = 0;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			c[a % 3]++;
		}

		int steps = 0, br = n / 3;

		for (int i = 0; i < 6; ++i) {
			if (c[i % 3] > br) {
				int extra = (c[i % 3] - br);
				c[(i + 1) % 3] += extra;
				c[i % 3] -= extra;

				steps += extra;
			}
		}

		cout << steps << "\n";
	}
}


/*
4
6
0 2 5 5 4 8
6
2 0 2 1 0 0
9
7 1 3 4 2 10 3 9 6
6
0 1 2 3 4 5

*/

/*
3
1
3
0

*/