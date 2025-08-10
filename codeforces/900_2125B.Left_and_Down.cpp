/*
https://codeforces.com/problemset/problem/2125/B
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	long long a, b, k;
	cin >> a >> b >> k;

	long long gcd_ab = __gcd(a, b);

	if (max(a, b) / gcd_ab <= k) cout << 1 << "\n";
	else cout << 2 << "\n";
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
4
3 5 15
2 3 1
12 18 8
9 7 5

*/

/*
1
2
1
2

*/