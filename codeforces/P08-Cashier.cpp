/*
https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P08
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, L, a;
	cin >> n >> L >> a;

	vector<pair<int, int>> cus;

	for (int i = 0; i < n; ++i) {
		int t, l;
		cin >> t >> l;

		cus.push_back({t, t + l});
	}
	sort(cus.begin(), cus.end());

	int last = 0, cnt = 0;
	for (int i = 0; i < n; ++i) {
		cnt += (cus[i].first - last) / a;
		last = cus[i].second;
	}
	cnt += (L - last) / a;

	cout << cnt << "\n";
}

int main() {
	solve();
}

/*
2 11 3
0 1
1 1

*/

/*
3
*/