/*
https://codeforces.com/problemset/problem/1989/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		string s, t;
		cin >> s >> t;

		int s_s = s.size(), s_t = t.size();
		int max_match = 0;
		for (int i = 0; i < s_s; ++i)
		{
			for (int j = 0; j < s_t; ++j)
			{
				if (s[i] == t[j]) {
					int indx_s = i;
					int indx_t = j;
					int match = 0;
					while (indx_s < s_s and indx_t < s_t) {
						if (s[indx_s] == t[indx_t]) {
							match++;
							indx_s++, indx_t++;
						} else {
							indx_s++;
						}
					}

					max_match = max(max_match, match);
				}
			}
		}
		cout << (s_s + s_t - max_match) << "\n";
	}
}


/*
5
aba
cb
er
cf
mmm
mmm
contest
test
cde
abcefg

*/

/*
4
4
3
7
7

*/