/*
https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P16
*/
#include <bits/stdc++.h>

using namespace std;

bool checkAlmostPrime(int n) {
	set<int> prime_factors;

	for (int i = 2; i * i <= n; ++i) {
		while (n % i == 0) {
			prime_factors.insert(i);
			n /= i;
		}
	}

	if (n > 1) prime_factors.insert(n);

	return prime_factors.size() == 2;
}

void solve() {
	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 1; i <= n; ++i) {
		if (checkAlmostPrime(i)) cnt++;
	}

	cout << cnt << "\n";
}

int main() {
	solve();
}

/*
10
2


21
8
*/