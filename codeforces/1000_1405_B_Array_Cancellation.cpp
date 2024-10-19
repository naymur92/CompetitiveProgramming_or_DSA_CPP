/*
https://codeforces.com/problemset/problem/1405/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		long long sum = 0;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			if (a > 0)
				sum += a;
			else {
				if (sum + a > 0)
					sum += a;
				else
					sum = 0;
			}
		}

		cout << sum << "\n";
	}
}


/*
7
4
-3 5 -3 1
2
1 -1
4
-3 2 -3 4
4
-1 1 1 -1
7
-5 7 -6 -4 17 -13 4
6
-1000000000 -1000000000 -1000000000 1000000000 1000000000 1000000000
1
0

*/

/*
3
0
4
1
8
3000000000
0

*/