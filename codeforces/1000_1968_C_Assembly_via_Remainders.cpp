/*
https://codeforces.com/problemset/problem/1968_C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> x(n - 1);
		vector<int> a(n);

		for (int i = 0; i < n - 1; ++i) {
			cin >> x[i];
		}

		a[0] = x[0] + 1;

		for (int i = 1; i < n; ++i) {
			a[i] = a[i - 1] + x[i - 1];

			if (i < n - 1 && a[i] <= x[i]) a[i] = ceil((double) (x[i] + 1 - a[i]) / a[i - 1]) * a[i - 1] + a[i];
		}

		for (int i = 0; i < n; ++i) {
			cout << a[i] << " ";
		}
		cout << "\n";
	}
}


/*
5
4
2 4 1
3
1 1
6
4 2 5 1 2
2
500
3
1 5

*/

/*
3 5 4 9
2 5 11
5 14 16 5 11 24
501 500
2 7 5
*/