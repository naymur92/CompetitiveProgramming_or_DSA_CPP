#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

int binExp(int a, int b, int m)
{
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

/*
Multiplicative Inverse (MI)
Modular Multiplicative Inverse (MMI)
*/

/*
There are n children and k toffees. k < n
count the number of ways to distribute toffee among
n children such that each children get 1 toffee only.
nCk % M, M = 1e9 + 7
n < 10^6, k < 10^6
Q < 10^5
n! / ((n - r)! * r!)
*/

const int N = 1e6 + 10;
int fact[N];

int main() {
	fact[0] = 1;
	for (int i = 0; i < N; ++i) {
		fact[i] = (fact[i - 1] * 1LL * i) % M;
	}

	int q;
	cin >> q;
	while (q--) {
		int n, k;
		cin >> n >> k;

		int ans = fact[n];
		int den = (fact[n - k] * 1LL * fact[k]) % M;
		ans = (ans * 1LL * binExp(den, M - 2, M)) % M;

		cout << ans << "\n";
	}
}