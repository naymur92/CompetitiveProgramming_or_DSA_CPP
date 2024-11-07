/*
https://codeforces.com/problemset/problem/2030/A
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

		sort(a.begin(), a.end());

		if (n == 1)
			cout << 0 << "\n";
		else
			cout << ((a[n - 1] - a[0]) * (n - 1)) << "\n";
	}
}


/*
3
1
69
3
7 6 5
5
1 1 1 2 2

*/

/*
0
4
4

*/