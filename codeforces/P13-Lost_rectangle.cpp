/*
https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P13
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	long long a;
	cin >> a;

	long long x = sqrt(a);
	while (a % x != 0) x--;

	long long y = a / x;

	cout << 2 * (x + y) << "\n";
}

int main() {
	solve();
}

/*
20
*/

/*
18
*/