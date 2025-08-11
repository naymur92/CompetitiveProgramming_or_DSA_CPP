/*
https://codeforces.com/problemset/problem/2121/B
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	vector<int> pref_sum(26);
	for (int i = 0; i < n; ++i) {
		pref_sum[s[i] - 'a']++;
	}

	for (int i = 1; i < n - 1; ++i) {
		int key = s[i] - 'a';
		if (pref_sum[key] > 1) {
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
12
3
aaa
3
aba
3
aab
4
abca
4
abba
4
aabb
5
abaca
5
abcda
5
abcba
6
abcbbf
6
abcdaa
3
abb

*/

/*
Yes
No
Yes
No
Yes
Yes
Yes
No
Yes
Yes
Yes
Yes

*/