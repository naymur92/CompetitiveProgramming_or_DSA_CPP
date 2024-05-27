/*
https://codeforces.com/problemset/problem/1473/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int q;
	cin >> q;
	while(q--)
	{
		string s, t;
		cin >> s >> t;

		if((s[0] != t[0]) || (s[s.size() - 1] != t[t.size() - 1])) {
			cout << -1 << endl;
		} else {
			string bg = s.size() >= t.size() ? s : t;
			string sm = s.size() < t.size() ? s : t;

			bool is_av_lcm = true;

			for (int i = 0; i < bg.size(); ++i)
			{
				if(bg[i] != sm[i % sm.size()]) {
					is_av_lcm = false;
					break;
				}
			}
			if (!is_av_lcm) {
				cout << -1 << endl;
			}
			else {
				// print lcm
				int lcm = lcm(bg.size(), sm.size());
				cout << lcm << endl
			}
		}
	}
}


/*
3
baba
ba
aa
aaa
aba
ab

*/

/*
baba
aaaaaa
-1
*/