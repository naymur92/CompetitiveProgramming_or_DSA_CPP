/*
https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P18
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	int cnt2 = n / 2;
	int cnt3 = n % 2;

	if (cnt3) cnt2--;

	cout << (cnt2 + cnt3) << "\n";
	for (int i = 0; i < cnt2; ++i) {
		cout << 2 << " ";
	}
	for (int i = 0; i < cnt3; ++i) {
		cout << 3 << " ";
	}
	cout << "\n";
}

int main() {
	solve();
}

/*
5

2
2 3


6

3
2 2 2
*/