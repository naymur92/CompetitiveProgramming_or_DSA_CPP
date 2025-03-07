/*
https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P24
*/
#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
vector<bool> isPrime(N, true);

void sieve() {
	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i < N; ++i) {
		if (isPrime[i]) {
			for (int j = i + i; j < N; j += i) {
				isPrime[j] = false;
			}
		}
	}
}

void solve() {
	int n;
	cin >> n;
	
	while (n--) {
		long long x;
		cin >> x;

		long long sqrt_x = sqrt(x);
		if (sqrt_x * sqrt_x == x && isPrime[sqrt_x]) cout << "YES\n";
		else cout << "NO\n";
	}
}

int main() {
	sieve();

	solve();
}

/*
3
4 5 6

YES
NO
NO

*/