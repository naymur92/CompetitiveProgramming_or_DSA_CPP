/*
https://codeforces.com/problemset/problem/1987/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		vector<int> h(n);

		for (int i = n - 1; i >= 0; --i) {
			cin >> h[i];
		}

		int steps = h[0];
		for (int i = 1; i < n; ++i) {
			steps = max(steps + 1, h[i]);
		}

		cout << steps << "\n";
	}
}


/*
4
3
1 1 2
2
3 1
1
9
5
7 4 4 3 2

*/

/*
4
3
9
7

*/