/*
https://codeforces.com/problemset/problem/2021/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, x;
		cin >> n >> x;

		int a[n];
		for (int i = 0; i < n; ++i)
			cin >> a[i];

		sort(a, a + n);

		map<int, int> extras;

		int max_mex = 0;
		for (int i = 0; i < n; ++i) {
			while (extras[max_mex % x] > 0) {
				extras[max_mex % x]--;
				max_mex++;
			}

			if (a[i] == max_mex)
				max_mex++;
			else if (a[i] < max_mex)
				extras[a[i] % x]++;
			else
				break;
		}

		while (extras[max_mex % x] > 0) {
			extras[max_mex % x]--;
			max_mex++;
		}

		cout << max_mex << "\n";
	}
}


/*
3
6 3
0 3 2 1 5 2
6 2
1 3 4 1 0 2
4 5
2 5 10 3

*/

/*

4
6
0

*/