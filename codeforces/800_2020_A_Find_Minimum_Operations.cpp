/*
https://codeforces.com/problemset/problem/2020/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		if (k == 1)
			cout << n << "\n";
		else {
			int ans {0};
			while (n) {
				ans += (n % k);
				n /= k;
			}

			cout << ans << "\n";
		}
	}
}


/*
6
5 2
3 5
16 4
100 3
6492 10
10 1

*/

/*
2
3
1
4
21
10

*/