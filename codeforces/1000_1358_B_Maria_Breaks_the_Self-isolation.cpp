/*
https://codeforces.com/problemset/problem/1358/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (int i = 0; i < n; ++i)
			cin >> a[i];

		// sort(a.begin(), a.end());

		// int total = 0;
		// int group = 0;
		// for (int i = 0; i < n; ++i) {
		// 	group++;

		// 	if (total + group >= a[i]) {
		// 		total += group;
		// 		group = 0;
		// 	}
		// }

		// cout << total + 1 << "\n";

		// alternative solution
		sort(a.begin(), a.end(), [](int a, int b) {return a > b;});
		int total = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i] <= n - i) {
				total = n -i;
				break;
			}
		}
		cout << total + 1 << "\n";
	}
}


/*
4
5
1 1 2 2 1
6
2 3 4 5 6 7
6
1 5 4 5 1 9
5
1 2 3 5 6

*/

/*
6
1
6
4

*/