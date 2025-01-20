/*
https://codeforces.com/problemset/problem/1930/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int left = 1, right = n;

		for (int i = 1; i <= n; ++i) {
			cout << (i % 2 ? left++ : right--) << " \n"[i == n];
		}
	}
}


/*
2
4
3

*/

/*
4 1 2 3
1 2 3

*/