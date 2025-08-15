/*
https://codeforces.com/problemset/problem/2117/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;

	/*vector<int> a(n);
	for (auto &i: a) cin >> i;

	bool is_possible = true;
	for (int i = 0; i < n; ++i) {
		if (a[i]) {
			if (x == 0) {
				is_possible = false;
				break;
			}
			i += x - 1;
			x = 0;
		}
	}

	cout << (is_possible ? "YES\n" : "NO\n");*/

	// another solution
	vector<int> indx;
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;

		if (num) indx.push_back(i);
	}

	if (indx.size() == 0 || indx.back() - indx[0] < x) cout << "YES\n";
	else cout << "NO\n";
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
7
4 2
0 1 1 0
6 3
1 0 1 1 0 0
8 8
1 1 1 0 0 1 1 1
1 2
1
5 1
1 0 1 0 1
7 4
0 0 0 1 1 0 1
10 3
0 1 0 0 1 0 0 1 0 0


*/

/*
YES
NO
YES
YES
NO
YES
NO

*/