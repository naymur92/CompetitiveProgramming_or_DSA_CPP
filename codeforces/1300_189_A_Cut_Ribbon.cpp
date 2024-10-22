/*
https://codeforces.com/problemset/problem/189/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, a, b, c;
	cin >> n >> a >> b >> c;

	int z, max_pieces = 0;
	for (int x = 0; a * x  <= n; ++x) {
		for (int y = 0; (a * x + b * y <= n); ++y) {
			if ((n - (a * x + b * y)) % c == 0) {
				z = (n - (a * x + b * y)) / c;

				max_pieces = max(max_pieces, (x + y + z));
			}
		}
	}

	cout << max_pieces << "\n";
}


/*
5 5 3 2


7 5 5 2


*/

/*
2


2

*/