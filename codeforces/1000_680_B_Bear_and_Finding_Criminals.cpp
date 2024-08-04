/*
https://codeforces.com/problemset/problem/680/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, n;
	cin >> n >> a;

	vector<int> t(n);
	for (auto &it: t) cin >> it;

	int ans = 0;
	for (int i = 0; i < n; ++i) 
		if (t[i]) {
			int d = i + 1 - a;
			int j = a - d - 1;

			if (j < 0 || j + 1 > n || t[i] == t[j]) ans++;
		}
	cout << ans << "\n";
}


/*
6 3
1 1 1 0 1 0


5 2
0 0 0 1 0

*/

/*
3


1

*/