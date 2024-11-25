/*
https://codeforces.com/problemset/problem/1995/B1
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		long long m;
		cin >> n >> m;

		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		sort(a, a + n);

		long long ans = 0, sum = 0;
		int l = 0;

		for (int i = 0; i < n; i++)
		{
			sum += 1LL * a[i];
			while (sum > m || (l < n && a[i] - a[l] > 1))
			{
				sum -= 1LL* a[l];
				l++;
			}
	
			ans = max(ans, sum);
		}

		cout << ans << "\n";
	}
}


/*
5
5 10
1 1 2 2 3
8 20
4 2 7 5 6 1 1 1
8 100000
239 30 610 122 24 40 8 2
11 13
2 4 11 1 1 2 3 5 4 3 2
8 1033
206 206 206 207 207 207 207 1000

*/

/*
7
13
610
13
1033

*/