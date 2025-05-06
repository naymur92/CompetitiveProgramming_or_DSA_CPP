/*
*/

#include <bits/stdc++.h>
using namespace std;

// constraints
const int N = 1e5 + 10;

int dp[N];

// top down approach
int fib(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;

	// memoise
	if (dp[n] != -1) return dp[n];

	return dp[n] = fib(n - 1) + fib(n - 2);
}

int main() {
	memset(dp, -1, sizeof(dp));

	int n = 20;
	// cout << fib(n);

	for (int i = 0; i <= n; ++i) {
		cout << fib(i) << " \n"[i == n];
	}

	// bottom up approach
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; ++i) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
}

/*

*/

/*
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765

*/