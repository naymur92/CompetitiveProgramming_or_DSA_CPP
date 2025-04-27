/*
https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/E
*/
#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);

void solve() {
	int n;
	cin >> n;

	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i <= N; ++i) {
		if (isPrime[i]) {
			for (int j = 2 * i; j <= N; j += i) {
				isPrime[j] = false;
			}
		}
	}

	int cnt = 0;
	for (int i = 3; i <= n; ++i) {
		if (isPrime[i] && isPrime[i + 2]) cnt++;
	}

	cout << cnt << '\n';
}

int main() {
	solve();
}

/*
10

2

////////////


*/