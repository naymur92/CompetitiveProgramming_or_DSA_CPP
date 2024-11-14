/*
https://codeforces.com/problemset/problem/2019/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		int a[n];
		int odd_max = 0, even_max = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];

			if ((i&1))
				odd_max = max(odd_max, a[i]);
			else
				even_max = max(even_max, a[i]);
		}

		int ans1 = odd_max + n / 2;
		int ans2 = even_max + n / 2;
		if ((n&1))
			ans2++;

		cout << max(ans1, ans2) << "\n";
	}
}


/*
4
3
5 4 5
3
4 5 4
10
3 3 3 3 4 1 2 3 4 5
9
17 89 92 42 29 92 14 70 45


*/

/*
7
6
10
97


*/