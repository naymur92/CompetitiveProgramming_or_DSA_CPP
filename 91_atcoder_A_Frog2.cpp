/*
https://atcoder.jp/contests/dp/tasks/dp_b
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int h[N];
int dp[N];
int k;

int solve(int i) {
	if (i == 0) return 0;

	if (dp[i] != -1) return dp[i];

	int cost = INT_MAX;

	for (int j = 1; j <= k; ++j) {
		if (i - j >= 0) cost = min(cost, solve(i - j) + abs(h[i] - h[i - j]));
	}

	return dp[i] = cost;
}

int main() {
	memset(dp, -1, sizeof(dp));
	int n;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		cin >> h[i];
	}

	cout << solve(n - 1);
}

/*
5 3
10 30 40 50 20


*/

/*
30
*/