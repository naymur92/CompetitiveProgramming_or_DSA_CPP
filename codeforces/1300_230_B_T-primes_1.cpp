/*
https://codeforces.com/problemset/problem/230/B
*/

#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
vector<bool> isPrime(N, true);

void sieve() {
	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i < N; ++i) {
		if (isPrime[i]) {
			for (int j = 2 * i; j < N; j += i) {
				isPrime[j] = false;
			}
		}
	}
}

int main() {
	sieve();
	
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		long long x;
		cin >> x;
		
		long long sqrt_x = sqrt(x);
		if (sqrt_x * sqrt_x != x) cout << "NO\n";
		else cout << (isPrime[sqrt_x] ? "YES\n" : "NO\n");
	}
}


/*
3
4 5 6


*/

/*
YES
NO
NO

*/