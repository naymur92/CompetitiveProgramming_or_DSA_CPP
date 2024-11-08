/*
https://codeforces.com/problemset/problem/2026/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int x, y, k;
		cin >> x >> y >> k;

		int m = min(x, y);
		cout << m << " 0 0 " << m << "\n";
		cout << "0 0 " << m << " " << m << "\n";
	}
}


/*
4
1 1 1
3 4 1
4 3 3
3 4 4

*/

/*
0 0 1 0
0 0 0 1
2 4 2 2
0 1 1 1
0 0 1 3
1 2 4 1
0 1 3 4
0 3 3 0

*/