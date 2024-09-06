/*
https://codeforces.com/problemset/problem/1770/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;

		int a[n + m];

		long long sum = 0;

		for (int i = 0; i < n + m; ++i) {
			cin >> a[i];
		}

		sort(a, a + n + m - 1);
		reverse(a, a + n + m);
		for (int i = 0; i < n; ++i) sum += a[i];
		cout << sum <<  "\n";
	}
}


/*
4
3 2
1 2 3
4 5
2 3
1 2
3 4 5
1 1
100
1
5 3
1 1 1 1 1
1000000000 1000000000 1000000000

*/

/*
12
9
1
3000000002

*/