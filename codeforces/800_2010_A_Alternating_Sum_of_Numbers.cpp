/*
https://codeforces.com/problemset/problem/2010/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int ans = 0;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			if ((i&1))
				ans -= a;
			else
				ans += a;
		}
		cout << ans << "\n";
	}
}


/*
4
4
1 2 3 17
1
100
2
100 100
5
3 1 4 1 5

*/

/*
-15
100
0
10

*/