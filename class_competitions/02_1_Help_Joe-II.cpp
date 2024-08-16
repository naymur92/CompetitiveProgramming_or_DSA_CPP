// https://www.hackerearth.com/problem/algorithm/help-joe-ii/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<long long> a(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		a[i] %= m;
	}
	sort(a.begin(), a.end());
	
	int q;
	cin >> q;

	while (q--) {
		long long x;
		cin >> x;

		x %= m;

		auto it = upper_bound(a.begin(), a.end(), m - x - 1);

		if (it != a.begin()) it--;

		cout << max((a[n - 1] + x) % m, (*it + x) % m) << "\n";
	}
}

/*
5 10
0 1 2 3 4
3
1
6
9
*/

/*
5
9
9

*/