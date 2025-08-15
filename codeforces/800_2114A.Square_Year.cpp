/*
https://codeforces.com/problemset/problem/2114/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int year;
	cin >> year;

	int sqrt_year = sqrt(year);
	if (year == sqrt_year * sqrt_year) {
		cout << 0 << " " << sqrt_year << "\n";
		return;
	}

	cout << -1 << "\n";
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
0001
1001
1000
4900
2025

*/

/*
0 1
-1
-1
34 36
20 25

*/