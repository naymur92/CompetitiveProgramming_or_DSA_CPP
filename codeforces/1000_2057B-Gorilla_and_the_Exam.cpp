/*
https://codeforces.com/problemset/problem/2057/B
*/

#include <bits/stdc++.h>

using namespace std;


void solve() {
	int n, k;
	cin >> n >> k;

	map<int, int> mp;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		mp[a]++;
	}

	vector<int> cnt;
	for (auto [_, x]: mp) {
		cnt.push_back(x);
	}
	sort(cnt.begin(), cnt.end());

	int ans = cnt.size();
	for (int i = 0; i < cnt.size() - 1; ++i) {
		if (k >= cnt[i]) {
			ans--;
			k -= cnt[i];
		} else {
			break;
		}
	}

	cout << ans << "\n";
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
6
1 0
48843
3 1
2 3 2
5 3
1 2 3 4 5
7 0
4 7 1 3 2 4 1
11 4
3 2 1 4 4 3 4 2 1 3 3
5 5
1 2 3 4 5

*/

/*
1
1
2
5
2
1

*/