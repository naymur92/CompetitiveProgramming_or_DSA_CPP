/*
https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P17
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	long long a, b, x, y;

	cin >> a >> b >> x >> y;

	long long gcd_xy = __gcd(x, y);
	x /= gcd_xy, y /= gcd_xy;

	long long ans = min(a / x, b / y);
	cout << ans << "\n";
}

int main() {
	solve();
}

/*
17 15 5 3

3


14 16 7 22

0


4 2 6 4

1


1000000000000000000 1000000000000000000 999999866000004473 999999822000007597

1000000063
*/