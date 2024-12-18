/*
https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/
*/

#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

int binExp(int a, int b, int m) {
	int ans = 1;

	while(b) {
		if (b&1) {
			ans = (ans * 1LL * a) % m;
		}
		a = (a * 1LL * a) % m;
		b >>= 1;
	}

	return ans;
}

const int N = 1e5 + 10;
int fact[N];

int main() {
	fact[0] = 1;
	for (int i = 1; i < N; ++i) {
		fact[i] = (fact[i - 1] * 1LL * i) % M;
	}


	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		int ans = (fact[n] * 1LL * fact[k]) % M;

		int den = (fact[n]  * 1LL * fact[k - n]) % M;

		ans = (ans * 1LL * binExp(den, M - 2, M)) % M;

		cout << ans << "\n";
	}
}

/*
1
3 3
*/


/*
6
*/