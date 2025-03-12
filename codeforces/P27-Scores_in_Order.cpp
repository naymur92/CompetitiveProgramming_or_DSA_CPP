/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P27
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> a(n);

	int x;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		a[i] = x;
		sort(a.rbegin(), a.rend());

		int indx = i;
		for (int j = 0; j <= i; ++j) {
			if (x == a[j]) {
				indx = j;
			}
		}
		cout << indx + 1 << "\n";
	}

	for (int i = 0; i < n; ++i) {
		cout << a[i] << " \n"[i == n - 1];
	}
}

int main() {
	solve();
}

/*
6
653
77
62
5
800
90



1
2
3
4
1
3
800 653 90 77 62 5 

*/