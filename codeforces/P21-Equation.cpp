/*
https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P21
*/
#include <bits/stdc++.h>

using namespace std;

/*const int N = 1e7 + 10;
vector<bool> isPrime(N, true);
vector<int> non_composits;

void sieve() {
	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i < N; ++i) {
		if (isPrime[i]) {
			for (int j = 2 * i; j < N; j += i) {
				isPrime[j] = false;
			}
		} else {
			non_composits.push_back(i);
		}
	}
}

void solve() {
	int n;
	cin >> n;

	int nc_sz = non_composits.size();
	int i = 0, j = 1;
	while (i < nc_sz && j < nc_sz) {
		if (non_composits[j] - non_composits[i] < n) j++;
		else if (non_composits[j] - non_composits[i] > n) i++;
		else {
			cout << non_composits[j] << " " << non_composits[i] << "\n";
			return;
		}
	}
}*/

void solve() {
	int n;
	cin >> n;

	cout << n * 9 << " " << n * 8;
}

int main() {
	// sieve();

	solve();
}

/*
1

9 8


512

4608 4096
*/