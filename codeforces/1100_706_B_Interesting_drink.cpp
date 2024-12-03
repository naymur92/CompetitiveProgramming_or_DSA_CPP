/*
https://codeforces.com/problemset/problem/706/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int x[n];
	for (int i = 0; i < n; ++i)
		cin >> x[i];
	sort(x, x + n);

	int q;
	cin >> q;

	while (q--) {
		int m;
		cin >> m;

		int up_indx = upper_bound(x, x + n, m) - x;
		cout << up_indx << "\n";
	}
}


/*
5
3 10 8 6 11
4
1
10
3
11

*/

/*
0
4
1
5

*/