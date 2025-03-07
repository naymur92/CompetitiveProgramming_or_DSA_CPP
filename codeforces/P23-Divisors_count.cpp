/*
https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P23
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> divisors_cnt(n + 1);

	for (int i = 1; i <= n; ++i) {
		for (int j = i; j <= n; j += i) {
			divisors_cnt[j]++;
		}
	}

	long long sum = accumulate(divisors_cnt.begin(), divisors_cnt.end(), 0);
	cout << sum << "\n";
}

int main() {
	solve();
}

/*
6

14
*/