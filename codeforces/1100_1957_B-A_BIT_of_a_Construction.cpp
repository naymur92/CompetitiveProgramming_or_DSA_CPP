/*
https://codeforces.com/problemset/problem/1957/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		if (n == 1) {
			cout << k << "\n";
			continue;
		}

		vector<int> a(n);

		int max_set_bit = log2(k);

		a[0] = (1<<max_set_bit) - 1;
		a[1] = k - a[0];

		for (int i = 0; i < n; ++i) {
			cout << a[i] << " \n"[i == n - 1];
		}
	}
}


/*
4
1 5
2 3
2 5
6 51

*/

/*
5
1 2
5 0
3 1 1 32 2 12
*/