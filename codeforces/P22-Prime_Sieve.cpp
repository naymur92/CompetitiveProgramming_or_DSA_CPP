/*
https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P22
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<bool> isPrime(n + 1, true);
	vector<int> primeCount(n + 1, 0);

	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i <= n; ++i) {
		primeCount[i] = primeCount[i - 1];
		if (isPrime[i]) {
			primeCount[i]++;
			for (int j = 2 * i; j <= n; j += i) {
				isPrime[j] = false;
			}
		}
	}

	/*for (int i = 0; i <= n; ++i) {
		cout << primeCount[i] << " \n"[i == n];
	}*/

	cout << primeCount[n] << "\n";
	for (int i = 0; i <= n; ++i) {
		if (isPrime[i]) cout << i << " ";
	}
	cout << "\n";
}

int main() {
	solve();
}

/*
1

9 8


512

4608 4096
*/