/*
https://codeforces.com/problemset/problem/2029/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int l, r, k;
		cin >> l >> r >> k;

		int ans = (r / k + 1) - l;
		cout << max(ans, 0) << "\n";
	}
}


/*
8
3 9 2
4 9 1
7 9 2
2 10 2
154 220 2
147 294 2
998 24435 3
1 1000000000 2

*/

/*
2
6
0
4
0
1
7148
500000000

*/