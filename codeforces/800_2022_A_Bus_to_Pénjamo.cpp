/*
https://codeforces.com/problemset/problem/2022/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n, r;
		cin >> n >> r;
		int a[n];

		int total = 0;
		int single = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			total += (a[i] / 2);

			single += (a[i] % 2);
		}

		int ans = total * 2 + min(single, (r - total) * 2 - single);

		cout << ans << "\n";
	}
}


/*
4
3 3
2 3 1
3 3
2 2 2
4 5
1 1 2 2
4 5
3 1 1 3

*/

/*
4
6
6
6

*/