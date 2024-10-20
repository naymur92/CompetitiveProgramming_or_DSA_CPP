/*
https://codeforces.com/problemset/problem/1713/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (auto &a_i: a) cin >> a_i;

		bool dec = false;
		bool is_possible = true;

		for (int i = 1; i < n - 1; ++i) {
			if (a[i] < a[i - 1])
				dec = true;

			if (dec && a[i] < a[i + 1])
				is_possible = false;
		}

		cout << (is_possible ? "YES\n" : "NO\n");
	}
}


/*
3
4
2 3 5 4
3
1 2 3
4
3 1 3 2

*/

/*
YES
YES
NO

*/