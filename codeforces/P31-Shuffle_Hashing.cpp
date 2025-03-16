/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P31
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	string p, h;
	cin >> p >> h;

	sort(p.begin(), p.end());
	int n = p.size();

	if (n > h.size()) {
		cout << "NO\n";
		return;
	}

	for (int i = 0; i <= h.size() - n; ++i) {
		string temp = h.substr(i, n);
		sort(temp.begin(), temp.end());

		// cout << temp << " ";

		if (temp == p) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}

/*
5
abacaba
zyxaabcaabkjh
onetwothree
threetwoone
one
zzonneyy
one
none
twenty
ten


YES
YES
NO
YES
NO


*/