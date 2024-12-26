/*
https://codeforces.com/problemset/problem/2045/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s, t;
	cin >> s >> t;

	int sz_s = s.size(), sz_t = t.size();

	vector<int> ind_t(26, -1);
	for (int i = sz_t - 2; i >= 0; --i) {
		if (ind_t[t[i] - 'a'] == -1) ind_t[t[i] - 'a'] = i;
	}

	int ans = INT_MAX, indx = -1;
	for (int i = 1; i < sz_s; ++i) {
		int j = ind_t[s[i] - 'a'];
		if (j != -1) {
			int len = i + sz_t - j;
			if (len < ans) {
				ans = len;
				indx = i;
			}
		}
	}

	if (indx == -1) {
		cout << -1 << "\n";
	} else {
		int j = ind_t[s[indx] - 'a'] + 1;
		cout << s.substr(0, indx + 1) << t.substr(j, sz_t - j + 1) << "\n";
	}
}


/*
sarana
olahraga


berhiber
wortelhijau


icpc
jakarta

*/

/*
saga

berhijau

-1
*/