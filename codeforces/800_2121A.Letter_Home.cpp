/*
https://codeforces.com/problemset/problem/2121/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, s;
	cin >> n >> s;

	int mn = 100, mx = 1, x;
	for (int i = 0; i < n; ++i) {
	    cin >> x;
	    mn = min(x, mn);
	    mx = max(x, mx);
	}
	
	cout << (mx - mn + min(abs(s - mn), abs(mx - s))) << "\n";
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
12
1 1
1
1 2
1
1 1
2
2 1
2 3
2 2
1 3
2 3
1 2
3 1
1 2 3
3 2
1 3 4
3 3
1 2 3
4 3
1 2 3 10
5 5
1 2 3 6 7
6 6
1 2 3 9 10 11


*/

/*
0
1
1
2
3
2
2
4
2
11
8
15

*/