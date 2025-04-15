/*
https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/C
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> lengths(n);
	for (int i = 0; i < n; i++) cin >> lengths[i];

	if (n < 4) {
		cout << 0 << "\n";
		return;
	}

	sort(lengths.begin(), lengths.end());
	cout << (lengths[n - 4] * 1LL * lengths[n - 4]) << "\n";
}

int main() {
	solve();
}

/*
7
6 3 7 6 5 8 10


36

////////////
2
2 6

0
*/