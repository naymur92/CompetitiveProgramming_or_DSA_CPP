/*
https://codeforces.com/problemset/problem/1975/B
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

		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		sort(a.begin(), a.end());

		vector<int> b;
		for (int i = 1; i < n; ++i) {
			if (a[i] % a[0]) b.push_back(a[i]);
		}

		bool is_possible = true;
		if (b.size() > 1) {
			for (int i = 1; i < b.size(); ++i) {
				if (b[i] % b[0]) {
					is_possible = false;
					break;
				}
			}
		}

		cout << (is_possible ? "YES\n" : "NO\n");
	}
}


/*
4
3
7 3 8
5
7 1 9 3 5
5
4 12 2 6 3
5
7 49 9 3 1000000000

*/

/*
No
Yes
Yes
No

*/