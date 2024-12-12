/*
https://codeforces.com/problemset/problem/1987/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		int last_max = a[0];
		vector<int> diffs;

		for (int i = 1; i < n; ++i) {
			if (a[i] < last_max) {
				diffs.push_back(last_max - a[i]);
			}

			last_max = max(last_max, a[i]);
		}

		sort(diffs.begin(), diffs.end());

		/*for (auto &diff: diffs) {
			cout << diff << " ";
		} cout << "\n";*/
		
		int m = diffs.size();
		if (m == 0) {
			cout << 0 << "\n";
			continue;
		}

		unsigned long long cost = diffs[0] * 1LL * (m + 1);
		for (int i = 1; i < m; ++i) {
			if (diffs[i] == diffs[i - 1]) continue;

			cost += ((diffs[i] - diffs[i - 1]) * 1LL * (m - i + 1));
		}

		cout << cost << "\n";
	}
}


/*
5
3
1 7 9
5
2 1 4 7 6
4
1 3 2 4
1
179
9
344 12 37 60 311 613 365 328 675

*/

/*
0
3
2
0
1821

*/