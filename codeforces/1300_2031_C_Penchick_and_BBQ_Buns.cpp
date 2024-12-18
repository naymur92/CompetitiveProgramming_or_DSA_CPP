/*
https://codeforces.com/problemset/problem/2031/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		if (n&1) {
			if (n < 27) {
				cout << -1 << "\n";
			} else {
                cout << "1 3 3 4 4 5 5 6 6 1 2 7 7 8 8 9 9 10 10 11 11 12 12 13 13 1 2 ";
                for (int i = 14; i <= n / 2; i++) {
                	cout << i << " " << i << " ";
                }
                cout << "\n";
            }
		} else {
			for (int i = 1; i <= n / 2; ++i) {
				cout << i << " " << i << " ";
			}
			cout << "\n";
		}
	}
}


/*
2
3
12

*/

/*
-1
1 2 3 6 10 2 7 6 10 1 7 3

*/