/*
https://codeforces.com/problemset/problem/2013/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; ++i)
			cin >> a[i];

		long long ans = a[n - 2];
		for (int i = n - 3; i >= 0; --i)
			ans -= a[i];
		ans = 1LL * a[n - 1] - ans;

		cout << ans << "\n";
	}
}


/*
5
2
2 1
3
2 2 8
4
1 2 4 3
5
1 2 3 4 5
5
3 2 4 5 4

*/

/*
-1
8
2
7
8

*/