/*
https://codeforces.com/problemset/problem/2044/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, x, y;
		cin >> n >> x >> y;

		vector<int> a(n, 0);
		x--, y--;

		for (int i = 1; i < n; i += 2) {
			a[(x + i) % n] = 1;
		}

		if (n % 2 || (x - y) % 2 == 0) a[x] = 2;

		for (int i = 0; i < n; ++i) {
			cout << a[i] << " \n"[i == n - 1];
		}
	}
}


/*
7
5 1 3
4 2 4
6 3 5
7 3 6
3 2 3
5 1 5
6 2 5

*/

/*
0 2 1 0 1
1 2 1 0
1 2 0 1 2 0
0 1 2 0 1 0 1
2 0 1
1 0 2 1 0
0 1 2 0 2 1

*/