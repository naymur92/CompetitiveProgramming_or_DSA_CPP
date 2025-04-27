/*
https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/F
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;

	string s;
	cin >> s;

	map<char, int> mp;
	for (int i = 0; i < n; ++i) {
		mp[s[i]]++;
	}

	vector<int> counts;
	for (auto &it: mp) counts.push_back(it.second);

	sort(counts.rbegin(), counts.rend());

	long long ans = 0;
	for (int cnt: counts) {
		if (cnt > k) {
			ans += k * 1LL * k;
			break;
		} else {
			ans += cnt * 1LL * cnt;
			k -= cnt;
		}
	}

	cout << ans << "\n";
}

int main() {
	solve();
}

/*
15 10
DZFDFZDFDDDDDDF

82

////////////
6 4
YJSNPI

4

*/