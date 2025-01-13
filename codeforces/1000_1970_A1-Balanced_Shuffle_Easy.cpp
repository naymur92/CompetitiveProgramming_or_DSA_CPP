/*
https://codeforces.com/problemset/problem/1970/A1
*/

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first) return a.second > b.second;
	return a.first < b.first;
}

int main() {	
	string s;
	cin >> s;
	int n = s.size();
	
	vector<pair<int, int> > pf(n);
	pf[0] = {0, 0};
	for (int i = 1; i < n; ++i) {
		if (s[i - 1] == '(') {
			pf[i] = {pf[i - 1].first + 1, i};
		} else {
			pf[i] = {pf[i - 1].first - 1, i};
		}
	}

	sort(pf.begin(), pf.end(), cmp);

	/*for (int i = 0; i < n; ++i) {
		cout << pf[i].first << " " << pf[i].second << "\n";
	}*/

	for (int i = 0; i < n; ++i) {
		cout << s[pf[i].second];
	}
	cout << "\n";
}


/*
(()(()))

*/

/*
()(()())

*/