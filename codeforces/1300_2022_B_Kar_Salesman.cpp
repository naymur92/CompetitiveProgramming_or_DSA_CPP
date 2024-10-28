/*
https://codeforces.com/problemset/problem/2022/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, x;
		cin >> n >> x;

		vector<long long> a(n);
		long long sum = 0;
		long long maxim = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			sum += a[i];
			maxim = max(maxim, a[i]);
		}

		long long customers = ceil(sum / (1.0 * x));
		customers = max(customers, maxim);

		/*// below approach not working. failed in test 2
		sort(a.begin(), a.end());
		int customers = 0;
		while (a[n - 1] > 0) {
			int min_elem = 0;
			for (int i = n - x; i < n; ++i) {
				if (a[i] > 0 && min_elem == 0)
					min_elem = a[i];
				a[i] -= min_elem;
			}
			customers += min_elem;

			sort(a.begin(), a.end());
		}*/
		
		cout << customers << "\n";
	}
}


/*
4
3 2
3 1 2
3 3
2 1 3
5 3
2 2 1 9 2
7 4
2 5 3 3 5 2 5

*/

/*
3
3
9
7

*/