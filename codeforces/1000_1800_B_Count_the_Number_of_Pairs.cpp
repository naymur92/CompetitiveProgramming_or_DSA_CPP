/*
https://codeforces.com/problemset/problem/1800/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;

		unordered_map<char, int> char_count;
		for (int i = 0; i < n; ++i)
		{
			char_count[s[i]]++;
		}

		int mx = 0;
		// calculate only matched pair
		for (auto &it: char_count) {
			char key = it.first;
			int sc = it.second;

			int burl = 0;
			if (islower(key)) {
				auto found_it = char_count.find((char) toupper(key));
				if (found_it != char_count.end()) {
					int matching_sc = found_it->second;

					burl = min(sc, matching_sc);

					// deduct matched values
					it.second -= burl;
					char_count[found_it->first] -= burl;
				}
			}
			mx += burl;
		}

		// calculate extra values
		for (auto &it: char_count) {
			if (k == 0) break;
			if (it.second <= 1) continue;

			int burl = min(k, (it.second / 2));

			k -= burl;

			mx += burl;
		}
		cout << mx << "\n";
	}

}


/*
5
11 2
aAaaBACacbE
2 2
ab
4 1
aaBB
6 0
abBAcC
5 3
cbccb

*/

/*
5
0
1
3
2

*/