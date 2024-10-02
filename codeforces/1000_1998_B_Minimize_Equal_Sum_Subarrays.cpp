/*
https://codeforces.com/problemset/problem/1998/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		vector<int> P(n);
		for (int i = 0; i < n; ++i)
			cin >> P[i];

		rotate(P.begin(), P.begin() + 1, P.end());

		// if (n > 2 && n % 2 != 0)
		// 	swap(P[n / 2], P[n - 1]);

		// reverse(P.begin(), P.end());

		for (int i = 0; i < n; ++i)
			cout << P[i] << " ";
		cout << "\n";
	}
}


/*
3
2
1 2
5
1 2 3 4 5
7
4 7 5 1 2 6 3

*/

/*
2 1
3 5 4 2 1
6 2 1 4 7 3 5
*/