/*
https://codeforces.com/problemset/problem/2004/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		vector<int> a(n);
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a.begin(), a.end(), [] (int a, int b) {return a > b;});

		for (int i = 1; i < n; i += 2) {
			int diff = a[i - 1] - a[i];
			int add_num = min(diff, k);
			k -= add_num;
			a[i] += add_num;
		}
		
		int sum = 0;
		for (int i = 0; i < n; ++i)
			if ((i&1) == 0)
				sum += a[i];
			else
				sum -= a[i];

		cout << sum << "\n";
	}
}


/*
4
2 5
1 10
3 0
10 15 12
4 6
3 1 2 4
2 4
6 9

*/

/*
4
13
0
0

*/