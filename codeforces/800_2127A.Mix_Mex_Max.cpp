/*
https://codeforces.com/problemset/problem/2127/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int &num: a) cin >> num;

	set<int> s(a.begin(), a.end());
	s.erase(-1);

	cout << (s.size() <= 1 && !s.count(0) ? "YES\n" : "NO\n");
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
8
3
-1 -1 -1
5
1 1 1 1 0
6
5 5 1 -1 -1 1
4
-1 -1 0 -1
4
-1 1 1 -1
3
3 3 -1
5
0 0 0 0 0
7
3 0 1 4 -1 2 3

*/

/*
YES
NO
NO
NO
YES
YES
NO
NO

*/