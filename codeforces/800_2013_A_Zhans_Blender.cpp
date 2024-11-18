/*
https://codeforces.com/problemset/problem/2013/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n, x, y;
		cin >> n >> x >> y;

		int ans = ceil(n / (1.0 * min(x, y)));

		cout << ans << "\n";
	}
}


/*
5
5
3 4
3
1 2
6
4 3
100
4 3
9
3 3

*/

/*
2
3
2
34
3

*/