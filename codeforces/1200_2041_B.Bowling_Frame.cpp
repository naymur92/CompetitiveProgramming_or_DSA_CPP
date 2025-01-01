/*
https://codeforces.com/problemset/problem/2041/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int w, b;
		cin >> w >> b;

		long double total = w + b;
		long ans = (sqrt(1 + 8 * total) - 1) / 2.0;

		/*
			total = 1 + 2 + 3 + 4 + ..... + n;
			total = n(n+1)/2
			=> n^2 + n - 2*total = 0
			applying root finding formula
			=> n = (-1 +- sqrt(1^2 - 4*1*(-2*total)))/2
			taking positive value
			=> n = (sqrt(1 + 8 * total) - 1) / 2;
		*/

		cout << ans << "\n";
	}
}


/*
4
1 2
3 2
3 3
12 0

*/

/*
2
2
3
4

*/