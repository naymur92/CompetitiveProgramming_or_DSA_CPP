/*
https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P19
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> h(n);
	for (int i = 0; i < n; ++i) {
		cin >> h[i];
	}

	int cnt = 0;
	vector<int> ch_peaks(n, 0);
	for (int i = 1; i < n - 1; ++i) {
		ch_peaks[i] = ch_peaks[i - 1];
		if (h[i] > h[i - 1] && h[i] > h[i + 1]) {
			ch_peaks[i]++;
			cnt++;
		}
	}
	ch_peaks[n - 1] = ch_peaks[max(0, n - 2)];

	/*for (int i = 0; i < n; ++i) {
		cout << ch_peaks[i] << " \n"[i == n - 1];
	}
	return;*/
	
	// min peaks starts from 3
	for (int i = 3; i <= n; ++i) {
		if (n % i) continue;

		int days = n / i;
		int start = 0;

		for (int j = 0; j < days; ++j) {
			if (ch_peaks[start + i - 1] - ch_peaks[max(0, start - 1)] == 0) break;
			start += i;
		}

		if (start == n) {
			cout << days << "\n";
			return;
		}
	}

	cout << 0 << "\n";
}

int main() {
	solve();
}

/*
12
5 4 1 7 2 4 6 5 9 3 4 2

3


4
10 20 30 40

0
*/