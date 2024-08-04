/*
https://codeforces.com/problemset/problem/1395/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int r, g, b, w;
		cin >> r >> g >> b >> w;

		if (r % 2 + g % 2 + b % 2 + w % 2 <= 1) cout << "YES\n";
		else if (r > 0 && g > 0 && b > 0 && ((r - 1) % 2 + (g - 1) % 2 + (b - 1) % 2 + (w + 3) % 2 <= 1)) cout << "YES\n";
		else cout << "NO\n";
	}
}


/*
4
0 1 1 1
8 1 9 3
0 0 0 0
1000000000 1000000000 1000000000 1000000000

*/

/*
No
Yes
Yes
Yes

*/