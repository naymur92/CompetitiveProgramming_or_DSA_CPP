/*
https://www.hackerearth.com/problem/algorithm/monk-and-divisor-conundrum-56e0eb99/
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

int hsh[N];
int multiples_ct[N];

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		hsh[a]++;
	}

	for (int i = 1; i < N; ++i) {
		for (int j = i; j < N; j += i) {
			multiples_ct[i] += hsh[j];
		}
	}

	int t;
	cin >> t;
	while (t--) {
		int p, q;
		cin >> p >> q;

		long long lcm = p * 1LL * q / __gcd(p, q);
		long ans = multiples_ct[p] + multiples_ct[q];
		if (lcm < N) {
			ans -= multiples_ct[lcm];
		}

		cout << ans << "\n";
	}
}

/*
6
2 3 5 7 4 9
2
4 5
3 7
*/


/*
2
3
*/