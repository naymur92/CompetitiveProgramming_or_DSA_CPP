/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P32
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
	sort(a.begin(), a.end());

	int mid = n / 2;
	long long x = accumulate(a.begin(), a.begin() + mid, 0LL);
	long long y = accumulate(a.begin() + mid, a.end(), 0LL);

	cout << (x * x +  y * y) << "\n";
}

int main() {
	solve();
}

/*
3
1 2 3


26
*/