/*
https://codeforces.com/problemset/problem/2003/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		string s;
		cin >> n >> s;

		map<char, int> m;
		for (int i = 0; i < n; ++i) {
			m[s[i]]++;
		}

		vector<pair<char, int>> m_s;
		for (auto &item: m) {
			m_s.push_back(item);
		}
		sort(m_s.begin(), m_s.end(), [](pair<char, int> &a, pair<char, int> &b) {return a.second > b.second;});

		for (int i = 0; i < n;) {
			for (int j = 0; j < m_s.size() && i < n; ++j) {
				if (!m_s[j].second)
					continue;

				putchar(m_s[j].first);
				m_s[j].second--;
				i++;
			}
		}
		putchar('\n');
	}
}


/*
5
3
abc
5
edddf
6
turtle
8
pppppppp
10
codeforces

*/

/*
acb
ddedf
urtlet
pppppppp
codeforces

*/