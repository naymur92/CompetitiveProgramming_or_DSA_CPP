/*
https://codeforces.com/problemset/problem/1632/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		// find highest set bit k
		int k = log2(n - 1);

		// cout << k << "\n";

		// print 1st part
		for (int i = n - 1; i >= (1 << k); --i)
			cout << i << " ";

		// print 2nd part
		for (int i = 0; i < (1 << k); ++i)
			cout << i << " ";

		cout << "\n";
	}
}


/*
4
2
3
5
10

*/

/*
0 1
2 0 1
3 2 1 0 4
4 6 3 2 0 8 9 1 7 5

*/