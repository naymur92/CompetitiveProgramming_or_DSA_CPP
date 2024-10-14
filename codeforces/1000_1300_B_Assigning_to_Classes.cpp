/*
https://codeforces.com/problemset/problem/1300/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int a[2 * n];

		for (int i = 0; i < 2 * n; ++i)
			cin >> a[i];

		sort(a, a + 2 * n);

		// for (int i = 0; i < 2 * n; ++i)
		// 	cout << a[i] << " ";
		// cout << "\n";

		cout << (a[n] - a[n - 1]) << "\n";
		// cout << a[n] << " => " << a[n - 1] << "\n";
	}

}


/*
3
1
1 1
3
6 5 4 1 2 3
5
13 4 20 13 2 5 8 3 17 16

*/

/*
0
1
5

*/