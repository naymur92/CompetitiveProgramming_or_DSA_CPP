/*
https://codeforces.com/problemset/problem/1418/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int x, y, k;
		cin >> x >> y >> k;

		unsigned long long total_s = 1LL * k * (y + 1) - 1 + x - 2;
		unsigned long long trades = 1LL * total_s / (x - 1) + k;

		cout << trades << "\n";
	}
}


/*
5
2 1 5
42 13 24
12 11 12
1000000000 1000000000 1000000000
2 1000000000 1000000000


*/

/*
14
33
25
2000000003
1000000001999999999

*/