/*
https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/D
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s, t, u;

	cin >> s >> t >> u;

	map<char, int> mp;

	for (int i = 0; i < s.size(); ++i) {
		mp[s[i]]++;
	}
	for (int i = 0; i < t.size(); ++i) {
		mp[t[i]]++;
	}

	for (int i = 0; i < u.size(); ++i) {
		mp[u[i]]--;
	}

	int is_possible = true;
	for (auto &it: mp) {
		if (it.second != 0) {
			is_possible = false;
			break;
		}
	}

	cout << (is_possible ? "YES\n" : "NO\n");
}

int main() {
	solve();
}

/*
SANTACLAUS
DEDMOROZ
SANTAMOROZDEDCLAUS

YES

////////////

PAPAINOEL
JOULUPUKKI
JOULNAPAOILELUPUKKI

NO
*/