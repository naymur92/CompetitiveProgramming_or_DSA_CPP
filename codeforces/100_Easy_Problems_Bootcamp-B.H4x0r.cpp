/*
https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/B
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	map<char, char> mp;
	mp['a'] = '4';
	mp['i'] = '1';
	mp['e'] = '3';
	mp['o'] = '0';
	mp['s'] = '5';

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); ++i) {
		if (mp.find(s[i]) != mp.end()) s[i] = mp[s[i]];
	}

	cout << s << "\n";
}

int main() {
	solve();
}

/*
haxor

h4x0r

////////////
rigcz

r1gcz

*/