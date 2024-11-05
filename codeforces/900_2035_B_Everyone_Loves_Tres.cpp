/*
https://codeforces.com/problemset/problem/2035/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		if (n == 1 || n == 3)
			cout << -1;
		else {
			int f_three_count = (n % 2 == 0 ? n - 2 : n - 4);
			for (int i = 1; i <= f_three_count; ++i)
				cout << 3;

			if (n % 2 == 1)
				cout << 63;

			cout << 66;
		}

		cout << "\n";
	}
}


/*
6
1
2
3
4
5
7

*/

/*
-1
66
-1
3366
36366
3336366

*/