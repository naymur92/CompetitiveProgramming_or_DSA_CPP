/*
https://codeforces.com/problemset/problem/1979/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int x, y;
		cin >> x >> y;

		// check the maximum common bit
		int i = 0;
		while (i <= 30) {
			if (((x >> i) & 1) != ((y >> i) & 1))
				break;
			i++;
		}

		// print the longest common subsegment
		cout << (1 << i) << "\n";
	}
}


/*
4
0 1
12 4
57 37
316560849 14570961

*/

/*
1
8
4
33554432

*/