/*
https://codeforces.com/problemset/problem/492/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, l;
	cin >> n >> l;
	int a[n];

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	sort(a, a + n);

	int max_dist = a[0];
	if (max_dist != 0)
		max_dist *= 2;

	for (int i = 1; i < n; ++i) {
		max_dist = max(max_dist, a[i] - a[i - 1]);
	}

	if (a[n - 1] != l)
		max_dist = max(max_dist, (l - a[n - 1]) * 2);

	double d = max_dist / 2.0;

	cout << fixed << d << "\n";
}


/*
7 15
15 5 3 7 9 14 0


2 5
2 5

*/

/*

2.5000000000


2.0000000000

*/