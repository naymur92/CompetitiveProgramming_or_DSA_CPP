/*
https://codeforces.com/problemset/problem/776/B
*/

#include <bits/stdc++.h>

using namespace std;

const int N = 100000 + 10;
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
	
	if (n < 3) cout << 1 << "\n";
	else cout << 2 << "\n";

	for (int i = 2; i <= n + 1; ++i) {
		cout << (isPrime[i] ? 1 : 2) << " ";
	}
	cout << "\n";
}


/*
3


*/

/*
2
1 1 2 
*/