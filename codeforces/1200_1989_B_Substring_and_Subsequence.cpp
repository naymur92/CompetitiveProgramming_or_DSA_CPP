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

		vector<int> chars_t(27, 0);
		for (int i = 0; i < t.size(); ++i)
		{
			chars_t[t[i] - 'a']++;
		}

		int extra = 0;
		/*for (int i = 0; i < s.size(); ++i)
		{
			if (chars_t[s[i]] == 0) extra++;
			else {
				for (int j = 0; j < t.size(); ++j)
				{
					while (s[i] != )
					if (s[i] == t[j])
				}
			}
		}*/
		int i = 0, j = 0;
		while (i < s.size())
		{
			if (chars_t[s[i]]) {
				while (s[i] != t[j]) {
					extra++;
					j++;
				}

				while (i < s.size() and j < t.size() and s[i] == t[j]) {
					i++, j++;
				}
			} else {
				i++;
			}

			// while (i < s.size() and j < t.size() and s[i] != t[j]) {
			// 	extra++;
			// 	j++;
			// }

			
		}
		cout << s.size() + extra << "\n";
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