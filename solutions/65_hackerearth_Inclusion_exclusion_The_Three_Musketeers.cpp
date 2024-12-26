/*
https://www.hackerearth.com/problem/algorithm/the-three-musketeers-6efd5f2d/
*/

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char &c) {
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

vector<string> subset(string &s) {
	vector<string> ans;
	int sz = (1<<s.size());

	for (int mask = 0; mask < sz; ++mask) {
		string t;
		for (int i = 0; i < s.size(); ++i) {
			if (mask & (1<<i)) t.push_back(s[i]);
		}

		if (t.size()) ans.push_back(t);
	}

	return ans;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<string> s(n);
		for (int i = 0; i < n; ++i) {
			cin >> s[i];
		}

		unordered_map<string, int> hsh;
		for (int i = 0; i < n; ++i) {
			set<char> dist_vowels;
			for (auto &c: s[i]) {
				if (isVowel(c)) dist_vowels.insert(c);
			}
			string dv_s;
			for (auto &c: dist_vowels) dv_s.push_back(c);
			
			vector<string> all_subsets = subset(dv_s);

			for (auto &sb: all_subsets) hsh[sb]++;
		}

		long long ans = 0;
		for (auto &hs: hsh) {
			long long sz = hs.second;
			if (sz < 3) continue;

			long long ways = sz * (sz - 1) * (sz - 2) / 6;
			if (hs.first.size() % 2 == 0) ans -= ways;
			else ans += ways;
		}

		cout << ans << "\n";
	}
}

/*
2
5
helen
irena
arthos
pentos
tulu
3
alen
bira
cult
*/


/*
1
0
*/