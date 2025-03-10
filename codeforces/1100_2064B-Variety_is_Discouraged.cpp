/*
https://codeforces.com/contest/2064/problem/B
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	vector<int> cnt(n + 1);
	for (int i = 0; i < n; ++i) {
		cnt[a[i]]++;
	}


	/*My solution*/
	int l = 0, r = 0, mx = 0;
	for (int i = 0; i < n; ++i) {
		if (cnt[a[i]] == 1) {
			int j = i;
			while (j < n and cnt[a[j]] == 1) {
				j++;
			}
			if (j - i > mx) {
				l = i, r = j, mx = j - i;
			}
			i = j - 1;
		}
	}

	if (l == 0 and r == 0) {
		cout << 0 << "\n";
		return;
	}

	cout << l + 1 << " " << r << "\n";


	/*Another solution*/

	/*vector<int> length(n + 1);
	length[0] = cnt[a[0]] == 1;
	for (int i = 1; i < n; ++i) {
		if (cnt[a[i]] == 1) {
			length[i] = length[i - 1] + 1;
		}
	}*/

	/*int mx = *max_element(length.begin(), length.end());
	if (mx == 0) {
		cout << 0 << "\n";
		return;
	}

	for (int i = 0; i < n; ++i) {
		if (length[i] == mx) {
			cout << i - len[i] + 2 << " " << i + 1 << "\n";
            return;
		}
	}*/
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}

/*
3
1
1
5
1 1 1 1 1
4
2 1 3 2

*/

/*
1 1
0
2 3

*/