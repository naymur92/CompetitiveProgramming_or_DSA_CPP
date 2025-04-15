/*
https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/A
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;

	map<int, int> mp;
	bool is_possible = false;
	for (int i = 0; i < n ; ++i) {
		int num;
		cin >> num;
		if (mp[x - num]) is_possible = true;
		mp[num]++;
	}

	cout << (is_possible ? "YES\n" : "NO\n");
}

int main() {
	solve();
}

/*
5 20
4 13 7 23 16


YES

////////////
3 8
4 5 6

NO

*/