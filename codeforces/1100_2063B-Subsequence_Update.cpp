/*
https://codeforces.com/problemset/problem/2063/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, l, r;
		cin >> n >> l >> r;
		l--;

		vector<int> a(n);

		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		vector <int> b(a.begin(), a.begin() + r);
		sort(b.begin(), b.end());

		vector<int> c(a.begin() + l, a.end());
		sort(c.begin(), c.end());

		long long leftSum = accumulate(b.begin(), b.begin() + r - l, 0ll);
		long long rightSum = accumulate(c.begin(), c.begin() + r - l, 0ll);

		cout << min(leftSum, rightSum) << '\n';
	}
}


/*
6
2 1 1
2 1
3 2 3
1 2 3
3 1 3
3 1 2
4 2 3
1 2 2 2
5 2 5
3 3 2 3 5
6 1 3
3 6 6 4 3 2

*/

/*
1
3
6
3
11
8

*/