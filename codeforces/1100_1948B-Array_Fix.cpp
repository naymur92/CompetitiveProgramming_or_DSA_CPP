/*
https://codeforces.com/problemset/problem/1948/B
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

		vector<int> b;
		b.push_back(a[n - 1]);

		for (int i = n - 2; i >= 0; --i) {
			if (a[i] > b.back() && a[i] > 9) {
				b.push_back(a[i] % 10);
				b.push_back(a[i] / 10);
			} else {
				b.push_back(a[i]);
			}
		}

		// for (auto &num: b) cout << num << " ";
		// cout << "\n";

		if (is_sorted(b.rbegin(), b.rend()))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}


/*
3
4
12 3 45 67
3
12 28 5
2
0 0

*/

/*
YES
NO
YES

*/