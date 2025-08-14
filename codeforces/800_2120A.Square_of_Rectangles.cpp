/*
https://codeforces.com/problemset/problem/2120/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int l1, b1, l2, b2, l3, b3;
	cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

	if (l1 == l2 && l2 == l3 && l1 == b1 + b2 + b3) cout << "YES\n";
	else if (b1 == b2 && b2 == b3 && b1 == l1 + l2 + l3) cout << "YES\n";
	else if (l1 == l2 + l3 && b2 == b3 && l1 == b1 + b2) cout << "YES\n";
	else if (b1 == b2 + b3 && l2 == l3 && b1 == l1 + l2) cout << "YES\n";
	else cout << "NO\n";
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
5
100 100 10 10 1 1
5 3 5 1 5 1
2 3 1 2 1 1
8 5 3 5 3 3
3 3 3 3 2 1

*/

/*
NO
YES
YES
NO
NO

*/